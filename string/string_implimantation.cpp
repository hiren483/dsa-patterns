#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

    // 1. Declaration & Initialization
    string s1 = "apna college";
    string s2("hello");
    string s3 = "world";

    cout << "s1: " << s1 << endl;
    cout << "s2: " << s2 << endl;

    // 2. Input
    string s4;
    cout << "Enter a word: ";
    cin >> s4;                  // stops at space
    cout << "You entered: " << s4 << endl;

    cin.ignore();                // clear buffer

    string s5;
    cout << "Enter a full sentence: ";
    getline(cin, s5);            // reads full line
    cout << "Sentence: " << s5 << endl;

    // 3. Length
    cout << "Length of s1: " << s1.length() << endl;
    cout << "Length of s1: " << s1.size() << endl; // same as length()

    // 4. Concatenation
    string s6 = s2 + " " + s3;
    cout << "Concatenation: " << s6 << endl;

    s2 += s3;
    cout << "After += : " << s2 << endl;

    // 5. Access characters
    cout << "First char of s1: " << s1[0] << endl;
    cout << "Last char of s1: " << s1[s1.length() - 1] << endl;

    // 6. Modify characters
    s1[0] = 'A';
    cout << "Modified s1: " << s1 << endl;

    // 7. Substring
    string sub = s1.substr(0, 4);   // from index 0, length 4
    cout << "Substring: " << sub << endl;

    // 8. Find
    int idx = s1.find("college");
    cout << "Index of 'college': " << idx << endl;

    // 9. Erase
    s1.erase(4, 3);  // start index, length
    cout << "After erase: " << s1 << endl;

    // 10. Insert
    s1.insert(4, " NEW ");
    cout << "After insert: " << s1 << endl;

    // 11. Replace
    s1.replace(4, 3, "OLD");
    cout << "After replace: " << s1 << endl;

    // 12. Push & Pop
    string s7 = "abc";
    s7.push_back('d');
    cout << "After push_back: " << s7 << endl;

    s7.pop_back();
    cout << "After pop_back: " << s7 << endl;

    // 13. Compare
    string a = "apple";
    string b = "banana";

    if (a == b) cout << "Equal\n";
    else if (a < b) cout << "apple < banana\n";

    // 14. Clear & Empty
    string s8 = "temp";
    s8.clear();
    cout << "Is empty? " << s8.empty() << endl;

    // 15. Convert string to int
    string num = "123";
    int x = stoi(num);
    cout << "String to int: " << x + 10 << endl;

    // 16. Convert int to string
    int y = 456;
    string num2 = to_string(y);
    cout << "Int to string: " << num2 + "7" << endl;

    // 17. Sort string
    string s9 = "zxyabc";
    sort(s9.begin(), s9.end());
    cout << "Sorted string: " << s9 << endl;

    // 18. Reverse string
    reverse(s9.begin(), s9.end());
    cout << "Reversed string: " << s9 << endl;

    // 19. Count frequency of characters
    string s10 = "aabbbcdd";
    int freq[26] = {0};

    for (char c : s10) {
        freq[c - 'a']++;
    }

    cout << "Frequency of characters:\n";
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            cout << char(i + 'a') << " -> " << freq[i] << endl;
        }
    }

    return 0;
}
