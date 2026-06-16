class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count=0;
        ListNode*temp=head;
        while(temp)
        {
            count++;
            temp=temp->next;
        }
        int m=count-n;
        if(m==0)
        {
            ListNode*num=head;
            head=head->next;
            delete num;
            return head;
        }
        temp=head;
        for(int i=1;i<m;i++)
        {
            temp=temp->next;
        }
        ListNode*num2=temp->next;
        temp->next=num2->next;
        delete num2;
        return head;
    }
};
