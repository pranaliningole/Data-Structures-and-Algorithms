#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkString(string& s, int left, int right) {
        if (left >= right)
            return true;

        if (s[left] != s[right])
            return false;

        return checkString(s, left + 1, right - 1);
    }

    bool palindromeCheck(string& s) {
        return checkString(s, 0, s.length() - 1);
    }
};

int main() {
    Solution obj;
    string s;

    cout << "Enter a string: ";
    cin >> s;

    if (obj.palindromeCheck(s))
        cout << "Palindrome\n";
    else
        cout << "Not Palindrome\n";

    return 0;
}