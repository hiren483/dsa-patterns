#include<iostream>
using namespace std;

ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        ListNode* temp2 = head;
        int idx = 0;
        int count = 0;
        while(temp != NULL){
            idx++;
            temp = temp->next;
        }
        while(count!= idx/2){
            count ++;
            temp2 = temp2->next ;
        }
        return temp2 ;
    }

int main(){
    vector<int> nums = {2,3,1,2,4,3};
    cout<<minSubArrayLen(7 , nums);
}
