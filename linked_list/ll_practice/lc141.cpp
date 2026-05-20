#include<iostream>
using namespace std;

bool hasCycle(ListNode *head) {
        ListNode* temp = head;
        unordered_map<ListNode* , int> mp;
        while(true){
            if(temp==NULL){return false ;}
            mp[temp]++;
            if(mp[temp]>1){
                return true;
            }
            temp = temp->next;
        }
        return false;
    }

bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                return true;
            }
        }
        return false;
    }

int main(){
    vector<int> nums = {2,3,1,2,4,3};
    cout<<minSubArrayLen(7 , nums);
}
