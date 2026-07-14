#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countDigit(int n) {
        if (n == 0)
            return 1;

        int cnt = 0;
        while (n != 0) {
            cnt++;
            n /= 10;
        }
        return cnt;
    }
};

int main() {
    Solution obj;

    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Number of digits = " << obj.countDigit(n) << endl;

    return 0;
}