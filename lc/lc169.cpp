#include<iostream>
using namespace std;
   int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int i = 0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        int max = mp[nums[0]];
        for(int i=0; i<nums.size(); i++){
            if(mp[nums[i]]>mp[max]){
                max = nums[i];
            }
        }
        return max;
    }
int main(){
    
}
