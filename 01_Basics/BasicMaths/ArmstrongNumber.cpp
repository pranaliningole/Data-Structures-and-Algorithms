#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isArmstrong(int n) {
        int cnt = 0;
        int temp = n;

        while (n != 0) {
            cnt++;
            n /= 10;
        }

        int sum = 0;
        n = temp;

        while (n != 0) {
            int rem = n % 10;
            sum += (int)pow(rem, cnt);
            n /= 10;
        }

        return sum == temp;
    }
};

int main() {
    Solution obj;

    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (obj.isArmstrong(n))
        cout << "Armstrong Number\n";
    else
        cout << "Not an Armstrong Number\n";

    return 0;
}