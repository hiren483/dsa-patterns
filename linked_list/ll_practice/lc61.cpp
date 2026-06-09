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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp = head ;
        ListNode* tail = head ;
        ListNode* curr = head;
        int n =0;
        if(head==NULL){
            return head;
        }
        while(temp!= NULL){
            n++;
            if(temp->next==NULL){
                tail = temp;
            }
            temp = temp->next;
        }
        k = k%n;
        if(k ==0){
            return head;
        }
        int target = 1;
        while(target != n-k){
            target++;
            curr = curr->next;
        }
        tail->next = head;
        temp = curr->next;
        curr->next = NULL;
        return temp;

    }
};