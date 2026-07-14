#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int whileLoop(int d) {
        int i = 0;
        int num = 0;

        if (d == 0) {
            num = 10;
        } else {
            num = d;
        }

        int sum = 0;

        while (i < 50) {
            sum += num;
            num += 10;
            i++;
        }

        return sum;
    }
};

int main() {
    int d;
    cin >> d;

    Solution obj;
    cout << obj.whileLoop(d);

    return 0;
}