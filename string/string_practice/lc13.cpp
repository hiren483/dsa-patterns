#include <iostream>
#include <string>
using namespace std;

int romanToInt(string s) {
        unordered_map<string , int> map ={
            {'I' ,1},
            {'II', 2},
            {"III",3},
            {"V",5},
           { "X" , 10},
            {"L" , 50},
           { "C" , 100},
           { "D" , 500},
            {"M" , 1000},
            {"IV", 4},
            {"IX", 9},
            {"XL", 40},
            {"XC", 90},
            {"CD", 400},
            {"CM", 900}
        }
        int ans = map[s[i]];
        for(int i = 0; i<s.length(); i++){
            current = map[s[i]];
            if(current>ans){
                    current = map[s[i]+s[i+1]];
                    ans = ans + current;
                    i = i+2;
            }
            else ans = ans + current ;
        }
        return ans;
    }

int main(){
 
}
