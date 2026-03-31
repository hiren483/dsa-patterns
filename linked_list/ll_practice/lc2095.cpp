#include<iostream>
using namespace std;

ListNode* deleteMiddle(ListNode* head) {
        if(head == NULL ||head->next == NULL) return NULL;
        int n = 0;
        ListNode* temp = head;
        while(temp != NULL){
            temp = temp->next ;
            n++;
        }
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* prev = dummy ;
        int x = 0 ;
        while(x != n/2){
            prev = prev->next;
            x++;
        }
        prev->next = prev->next->next;
        return dummy->next;
    }

int main(){
    
}
