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
        ListNode* temp = head;
        int size = 0;
        
        if(head == NULL || head->next == NULL){
            return NULL;
        }
        else if(head->next->next == NULL){
            head->next = NULL;
            return head;
        }
        else{
            while(temp != NULL){
                size++;
                temp = temp->next;
            }
            int mid = size / 2;
            mid = mid - 1;
            temp = head;
            while(mid--){
                temp = temp->next;
            }
            temp->next = temp->next->next;


        }
        return head;
    }
};