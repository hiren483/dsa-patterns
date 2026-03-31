#include <iostream>
#include<unordered_map>
using namespace std;

void sortColors(vector<int>& nums) {
        unordered_map<int , int> map;
        for(int i = 0; i< nums.size() ; i++){
            map[nums[i]]++;
        }
        for(int i = 0 ; i< map[0] ; i++){
            nums[i] = 0;
        }
        for(int i = map[0] ; i< map[0] + map[1] ; i++){
            nums[i] = 1;
        }
        for(int i = map[0] + map[1] ; i< nums.size() ; i++){
            nums[i] = 2;
        }
    }

int main(){
 
}
