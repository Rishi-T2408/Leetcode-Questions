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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==NULL)
        {
            return NULL;
        }
        int count=0;
        ListNode *p=head;
        while(p!=NULL)
        {
            count++;
            p=p->next;
        }
        int mid=0;
        if(count%2==0)
        {
            mid=(count/2)+1;
        }
        else{
            mid=count/2+1;
        }
        p=head;
        ListNode *q=head;
        for(int i=1;i<mid;i++)
        {
            q=p;
            p=p->next;
        }
        q->next=p->next;
        delete(p);
        return head;
        
    }
};