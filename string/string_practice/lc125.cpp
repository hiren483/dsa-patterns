#include <iostream>
using namespace std;

bool isPalindrome(string s) {
        int st = 0 , end = s.length()-1;
        while(st<end){
            while (st < end && !isalnum(s[st])) st++;
            while (st < end && !isalnum(s[end])) end--;

            if(tolower(s[st])!=tolower(s[end])){
                return false;
            }
            else {
                st++;
                end--;
            }
        }
        return true;
    }

int main(){
 
}
