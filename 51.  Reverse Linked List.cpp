
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* current = head;
        ListNode* previous = NULL;

        while(current!=NULL){
            ListNode* nextAdd = current -> next;
            current -> next = previous;
            previous = current;
            current = nextAdd;
        }
        return previous;
    }
};
