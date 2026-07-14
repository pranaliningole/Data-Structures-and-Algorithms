#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void PrintNumber1toN(int i, int n) {
        if (i > n)
            return;

        cout << i << " ";
        PrintNumber1toN(i + 1, n);
    }

    void printNumbers(int n) {
        PrintNumber1toN(1, n);
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