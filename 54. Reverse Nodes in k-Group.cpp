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
    void reverse(ListNode* head , int times){
        ListNode* current = head;
        ListNode* previous = NULL;
        while(times--){
            ListNode* nextadd = current->next;
            current->next = previous;
            previous = current;
            current = nextadd;
        }
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode* left = head;
        ListNode* right;
        ListNode* res = NULL;
        ListNode* prevleft = NULL;
        int size = k;

        while(true){
            right = left;
            for(int i=0; i<size-1; i++){
                if(right == NULL){
                    break;
                }
                right = right->next;
            }
            if(right){
                ListNode* nextleft = right->next;

                reverse(left,size);
                left->next = nextleft;

                if(prevleft){
                    prevleft->next = right;
                }
                if(res == NULL){
                    res = right;
                }
                prevleft = left;
                left = nextleft;
            }
            else{
                if(prevleft){
                    prevleft->next=left;
                }
                break;
            }
        }
        return res;
    }
};
