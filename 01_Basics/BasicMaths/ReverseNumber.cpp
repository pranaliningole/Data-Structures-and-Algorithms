#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverseNumber(int n) {
        int reverse = 0;
        while(n != 0){
            int rem = n % 10;
            reverse = (reverse * 10) + rem;
            n = n / 10;
        }
        return reverse;
    }
};

int main() {
    Solution obj;

    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Reversed number = " << obj.reverseNumber(n) << endl;

    return 0;
}