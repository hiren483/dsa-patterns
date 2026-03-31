#include<iostream>
using namespace std;

ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head ;
        ListNode* dummy = new ListNode(0);
        ListNode* prev = dummy ;
        dummy->next = head ;
        int N = 0;
        while(temp != NULL){
            N++;
            temp = temp->next;
        }
        int x = N - n;
        while(x != 0){
            prev = prev->next ;
            x--;
        }
        prev -> next = prev->next->next;
        return dummy->next;
    }

int main(){
    
}
