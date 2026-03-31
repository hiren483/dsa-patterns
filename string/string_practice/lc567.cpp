#include <iostream>
using namespace std;
bool ispelendrom(string s1 , string s2){
    int arr[26] ={0};
    for(int i = 0; i<s1.length();i++){
        arr[s1[i]-'a']++;
    }
    for(int i = 0; i<s2.length();i++){
        arr[s2[i]-'a']--;
    }
    for(int i =0; i< 26 ; i++){
        if(arr[i]!=0) return false;
    }
    return true;
}
bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length()) return false;
        if(s1.length() == s2.length()){
            return ispelendrom(s1 ,s2);
        }
        // for(int i = 0; i< s2.length()-s1.length() ; i++){
        //     if()
        // }
        int i = 0; 
        int j = 1 ;
        while(j<=s2.length()-1){
            if(ispelendrom(s1 , s2.substr(i,s1.length()))){
                return true;
            }
            else {
                i++;
                j++;
            }
        }
        return false ;
    }
int main(){
 
}
