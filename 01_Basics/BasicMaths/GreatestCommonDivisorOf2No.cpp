#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int GCD(int n1, int n2) {
        while (n2 != 0) {
            int rem = n1 % n2;
            n1 = n2;
            n2 = rem;
        }
        return n1;
    }
};

int main() {
    Solution obj;

    int n1, n2;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;

    cout << "GCD = " << obj.GCD(n1, n2) << endl;

    return 0;
}