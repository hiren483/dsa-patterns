#include <iostream>
#include<unordered_map>
using namespace std;

bool isAnagram(string s, string t) {
        unordered_map<char , int> hashs;
        unordered_map<char , int> hasht;
        for(int i = 0 ; i< s.length() ; i++){
            hashs[s[i]]++ ;
        }
        for(int i = 0 ; i< t.length() ; i++){
            hasht[t[i]]++ ;
        }
        return hashs == hasht ;

        // if(s.length() != t.length()) return false;

        // int arr[26] = {0};

        // for(int i=0; i<s.length(); i++){
        //     arr[s[i] - 'a'] +=1;
        //     arr[t[i] - 'a'] -=1;
        // }
        // for(int check : arr){
        //     if(check != 0) return false;
        // }
        // return true;
    }

int main(){
 
}
