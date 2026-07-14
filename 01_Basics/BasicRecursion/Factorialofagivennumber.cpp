#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int factorial(int n) {
        if (n == 0 || n == 1)
            return 1;

        return n * factorial(n - 1);
    }
};

int main() {
    Solution obj;

    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "Factorial = " << obj.factorial(n);

    return 0;
}