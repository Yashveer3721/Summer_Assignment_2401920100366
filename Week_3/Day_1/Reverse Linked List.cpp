class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev=NULL,*curr=head,*future;
        while(curr)
        {
            future=curr->next;
            curr->next=prev;
            prev=curr;
            curr=future;
        }
        return prev;
    }
};
