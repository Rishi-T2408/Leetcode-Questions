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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left!=1)
            head->next=reverseBetween(head->next,left-1,right-1);
        else{
            ListNode *curr=head,*next=NULL,*prev=NULL;
            for(int i=0;i<right;i++)
            {
                next=curr->next;
                curr->next=prev;
                prev=curr;
                curr=next;
            }
            head->next=curr;
            return prev;
        }
        return head;
    }
};