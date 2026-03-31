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

int main(){
    vector<int> nums = {2,3,1,2,4,3};
    cout<<minSubArrayLen(7 , nums);
}
