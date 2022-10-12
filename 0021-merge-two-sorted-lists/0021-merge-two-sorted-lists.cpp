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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* head  = list1;
    ListNode* tail  = list1;
    // Write your code here.
    if(list1 == NULL){
        return list2;
    }
    else if(list2 == NULL){
        return list1;
    }
    else{
        if(list1->val < list2->val){
                head = list1;
                tail = list2;
        }else{
                head = list2;
                tail = list1;
            }
        ListNode* next = NULL;
        ListNode* temp = head;
        while(temp->next != NULL){
                if(temp->next->val > tail->val){
                    next = temp->next;
                    temp->next = tail;
                    tail = next;
                }else{
                    temp = temp->next;
                }
            
                
        }
        temp->next = tail;
        
         
    }
    
    return head;
    }
};