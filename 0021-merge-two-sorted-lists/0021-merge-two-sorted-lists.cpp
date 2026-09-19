#include<vector>
#include <algorithm>
using namespace std;
// struct ListNode {
//      int val;
//      ListNode *next;
//      ListNode() : val(0), next(nullptr) {}
//      ListNode(int x) : val(x), next(nullptr) {}
//      ListNode(int x, ListNode *next) : val(x), next(next) {}
//  };
 
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp=list1;
        if(temp==nullptr){
            return list2;
        }
        
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        temp->next=list2;
        ListNode* temp2=list1;
        
        vector <int> ash;

        while(temp2!=nullptr){
            ash.push_back(temp2->val);
            temp2=temp2->next;

        }
        sort(ash.begin(),ash.end());
        ListNode* temp3=list1;
        
        for(int i=0;i<ash.size();i++){
            temp3->val=ash[i];
            temp3=temp3->next;
        }
        return list1;
    }
};