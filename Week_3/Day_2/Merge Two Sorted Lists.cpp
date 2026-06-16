class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(!list1 && !list2)
        return NULL;
        if(!list1)
        return list2;
        if(!list2)
        return list1;
        //start with dumy node
        ListNode* head=new ListNode(0);
        ListNode* tail=head;
        while(list1 && list2)
        {
            if(list1->val<=list2->val)
            {
                tail->next=list1;
                list1=list1->next;
                tail=tail->next;
                tail->next=NULL;
            }
            else
            {
                tail->next=list2;
                list2=list2->next;
                tail=tail->next;
                tail->next=NULL;
            }
        }
        //check if any list remain if yes add as it is remaining
        if(!list1)
        tail->next=list2;
        else
        tail->next=list1;
        //remove dumy node
        return head=head->next;
    }
};
