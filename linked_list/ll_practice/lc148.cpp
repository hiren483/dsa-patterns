/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        vector<int> ll;
        ListNode* temp = head;
        while(temp){
            ll.push_back(temp->val);
            temp = temp->next;
        }
        sort(ll.begin(),ll.end());
        temp = head;
        for(int i = 0; i < ll.size();i++){
            temp->val = ll[i];
            temp=temp->next;
        }
        return head;
    }
};