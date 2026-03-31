#include<iostream>
using namespace std;

ListNode* oddEvenList(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        else {
        ListNode* odd = head;
        ListNode* even = head->next;
        ListNode* even_head = head->next;
        while(even != NULL && even -> next != NULL){ 
        odd->next = even->next;
        odd = odd ->next;
        even->next = odd->next;
        even = even ->next ;
        }
        odd->next = even_head ;
        return head;
        }
    }

int main(){
    
}
