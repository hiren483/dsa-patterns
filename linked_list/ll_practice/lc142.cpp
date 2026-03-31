#include<iostream>
using namespace std;

ListNode *detectCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(slow != NULL && fast != NULL){
            slow = slow->next ;
            fast = fast->next->next ;

            if(fast == slow ){
                break;
            }
        }
        if(slow == NULL || head == NULL){
            return nullptr;
        }
        else{
        int idx = 0;
        ListNode temp = head ;
        while(temp != fast){
            idx++ ;
            temp = temp->next ;
        }
        return fast;
    
    }
        
    }

int main(){
    vector<int> nums = {2,3,1,2,4,3};
    cout<<minSubArrayLen(7 , nums);
}
