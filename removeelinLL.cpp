//  this is different solution from leetcode solution of problem no 203 on LL without the use of dummynode
ListNode* removeElements(ListNode* head, int val) {
        while (head != NULL && head->val == val) {
            ListNode* del = head;
            head = head->next;
            delete del;
        }
        ListNode* temp = head;
     while (temp != NULL && temp->next != NULL) {
            if (temp->next->val == val) {
                ListNode* del = temp->next;
                temp->next = temp->next->next; 
                delete del;
            } else {
                temp = temp->next; 
            }
        }
        return head;
    }