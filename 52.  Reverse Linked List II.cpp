
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head == NULL || left == right){
            return head;
        }
        ListNode* before = NULL;
        ListNode* t = head;
        for(int i=1; i<left; i++){
            before = t;
            t = t->next;
        }
        ListNode* current = t;
        ListNode* previous = NULL;
        int times = right-left+1;

        while(times--){
            ListNode* nextAdd = current->next;
            current->next = previous;
            previous = current;
            current = nextAdd;
        }
        if(before){
            before->next = previous;
        }
        t->next = current;
        if(before == NULL){
            return previous;
        }
        return head;
    }
};
