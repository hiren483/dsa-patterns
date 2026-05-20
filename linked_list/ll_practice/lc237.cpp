#include<iostream>
using namespace std;

void deleteNode(ListNode* node) {
        ListNode* nextNode = node->next;
        node->val = node->next->val;
        node->next = node->next->next;
        delete nextNode;
    }

int main(){
    vector<int> nums = {2,3,1,2,4,3};
    cout<<minSubArrayLen(7 , nums);
}
