#include<iostream>
#include<unoredered_set>

using namespace std;

int missingNumber(vector<int>& nums) {
        unoredered_set<int , int> map;
        int n = nums.size();
        for(int i = 0; i< n ; i++){
            map[nums[i]]++;
        }
        for(int i = 0; i< n ; i++){
            if(map[nums[i]]==0){return nums[i];}
        }
        return 0;
    }

int main(){
    

}
