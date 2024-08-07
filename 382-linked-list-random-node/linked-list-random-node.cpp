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
 ListNode *curr = new ListNode();
    Solution(ListNode* head) {
        curr->next=head;
    }
    
    int getRandom() {
        int n=0;
        ListNode *temp=curr;
        while(temp->next){
            n++;
            temp=temp->next;
        }
        int random=rand()%n;
        ListNode *a=curr;
        for(int i=0;i<=random;i++){
            a=a->next;
        }
        return a->val;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */