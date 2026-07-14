#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void printNumbers(int n) {
        if (n < 1) return;
        cout << n << endl;
        printNumbers(n - 1);
    }
};

int main() {
    Solution obj;

    int n;
    cout << "Enter n: ";
    cin >> n;

    obj.printNumbers(n);

    return 0;
}