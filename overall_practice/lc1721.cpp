#include<iostream>
using namespace std;

// ListNode* swapNodes(ListNode* head, int k) {
//     ListNode* temp = head;
//     ListNode* temp2 = head;
//     ListNode* temp3 = head;

//     int n = 0;

//     while(temp2 != NULL){
//         n++;
//         temp2 = temp2->next;
//     }

//     for(int i = 1; i < k; i++){
//         temp = temp->next;
//     }
//     temp3 = temp;  

//     for(int i = 1; i <= n - k; i++){
//         temp = temp->next;
//     }

//     swap(temp3->val, temp->val);
//     return head;
// }


ListNode* swapNodes(ListNode* head, int k) {
    ListNode* temp = head;
    ListNode* temp2 = head;
    ListNode* temp3 = head;

    int n = 0;

    while(temp2 != NULL){
        n++;
        temp2 = temp2->next;
    }

    for(int i = 1; i < k; i++){
        temp = temp->next;
    }
    temp3 = temp;  

    for(int i = 1; i <= n - k+1; i++){
        temp = temp->next;
    }

    swap(temp3->val, temp->val);
    return head;
}

int main(){
    

}
