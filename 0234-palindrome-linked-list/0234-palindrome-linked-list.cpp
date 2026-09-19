#include<vector>
using namespace std;
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* temp=head;
        vector <int >arr;

        while(temp!=nullptr){
            arr.push_back(temp->val);
            temp=temp->next;
        }
        int l=0;
        int r=arr.size()-1;

        while(l<r){
            if(arr[l]!=arr[r]){
                return 0;
            }
                l++;
                r--;
        }
        return 1;
        
    }
};