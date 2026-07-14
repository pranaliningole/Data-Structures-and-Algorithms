#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void pattern6(int n) {
        for (int i = n; i >= 1; i--) {
            for (int j = 1; j <= i; j++) {
                cout << j;
            }
            cout << endl;
        }
    }
};

int main() {
    Solution obj;
    int n;
    cin >> n;
    obj.pattern6(n);
    return 0;
}