#include <stack>
using namespace std;
class MyQueue{
stack<int> s1;  
stack<int> s2;
public:
 
void push(int v) {
    s2.push(v);
}

int pop() {
    if (s1.empty()) {
        while (!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
    }
    if (s1.empty()) return -1;    
    int res = s1.top();
    s1.pop();
    return res;
}

bool empty() {
    return s1.empty() && s2.empty();
}

int peek() {
    if (s1.empty()) {
        while (!s2.empty()) {
            s1.push(s2.top());
            s2.pop();
        }
    }
    if (s1.empty())
        return -1;
    return s1.top();
}
};