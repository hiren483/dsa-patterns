#include<iostream>
using namespace std;

bool Palindrome(vector<int> values , int left , int right){
    if(left >= right){return true ;}
    if(values[left] == values[right]){
        return Palindrome(values , left+1 , right - 1);
    }
    else{
        return false;
    }
}

bool isPalindrome(ListNode* head) {
        vector<int> values;
        ListNode* temp = head;
        while(temp != NULL){
            values.push_back(temp->val);
            temp = temp->next ;
        }
        return Palindrome(values , 0 , values.size()-1);
    }



int main(){
    
}
