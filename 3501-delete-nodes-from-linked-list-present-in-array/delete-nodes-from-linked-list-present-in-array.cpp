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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        unordered_set<int> digits(nums.begin(),nums.end());
        if(head==NULL){
            return head;
        }
        
         while(head!=NULL && digits.find(head->val)!=digits.end()){
            head=head->next;
        }
        ListNode* curr=head;
       
        while(curr->next!=NULL){
         if(digits.find(curr->next->val)!=digits.end()){
            curr->next=curr->next->next;
        }else{
            curr=curr->next;
        }
        }
        return head;
    }
};