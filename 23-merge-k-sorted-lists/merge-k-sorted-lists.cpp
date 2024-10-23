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
    struct Compare {
        bool operator()(ListNode* a, ListNode* b) {
            return a->val > b->val; 
        }
    };
    ListNode* mergeKLists(vector<ListNode*>& lists) {
     priority_queue<ListNode*,vector<ListNode*>,Compare> pq;

     for(ListNode* list:lists){
        if(list){
 pq.push(list);
        }
       
     }   
     ListNode* dummy=new ListNode(0);
     ListNode* current=dummy;


     while(!pq.empty()){
        ListNode* minNode=pq.top();
        pq.pop();

        current->next=minNode;
        current=current->next;

        if(minNode->next){
            pq.push(minNode->next);
        }
     }

     return dummy->next;
    }
};