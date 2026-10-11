#include <stack>

class Solution {
public:
    bool isValid(string s) {
        stack<char> p;
        for (auto i : s){
            if(i=='{' || i=='(' ||  i=='[' )
            p.push(i);

             else {
                if (p.empty()) {
                    return false;
                }



            if((i == ')' && p.top() == '(') ||
                    (i == '}' && p.top() == '{') ||
                    (i == ']' && p.top() == '[')) {
                        p.pop();
            }
            else {
                    return false;
                }
        }
                
        } 
            return p.empty();
    }
    
};