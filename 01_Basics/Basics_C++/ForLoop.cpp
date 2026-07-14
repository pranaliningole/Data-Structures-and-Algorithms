#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int forLoop(int low, int high) {
        int sum = 0;
        for (int i = low; i <= high; i++) {
            sum += i;
        }
        return sum;
    }
};

int main() {
    Solution obj;

    int low, high;
    cout << "Enter the lower limit: ";
    cin >> low;

    cout << "Enter the upper limit: ";
    cin >> high;

    cout << "Sum = " << obj.forLoop(low, high) << endl;

    return 0;
}