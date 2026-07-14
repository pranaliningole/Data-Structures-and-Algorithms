#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int n) {
        if (n < 0 || (n % 10 == 0 && n != 0))
            return false;

        int reverse = 0;

        while (n > reverse) {
            int rem = n % 10;
            reverse = reverse * 10 + rem;
            n /= 10;
        }

        return (n == reverse) || (n == reverse / 10);
    }
};

int main() {
    Solution obj;

    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (obj.isPalindrome(n))
        cout << "Palindrome\n";
    else
        cout << "Not Palindrome\n";

    return 0;
}