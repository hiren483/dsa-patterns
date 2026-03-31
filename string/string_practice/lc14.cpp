#include <iostream>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {

    if (strs.size() == 0) return "";

    string base = strs[0];

    for (int i = 0; i < base.length(); i++) {

        char current = base[i];

        for (int j = 1; j < strs.size(); j++) {

            // if string ends or mismatch
            if (i >= strs[j].length() || strs[j][i] != current) {
                return base.substr(0, i);
            }
        }
    }

    return base;
}


int main(){
 
}
