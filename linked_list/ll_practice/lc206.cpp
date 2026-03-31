#include<iostream>
using namespace std;

ListNode* reverseList(ListNode* head) {
            ListNode* prev = NULL;
            ListNode* curr = head;
            ListNode* nxt = NULL ;
            while(curr != NULL){
                nxt = curr->next ;
                curr->next = prev;
                prev = curr;
                curr = nxt;
            }
            return prev;
    }

int main(){
    vector<int> nums = {2,3,1,2,4,3};
    cout<<minSubArrayLen(7 , nums);
}
