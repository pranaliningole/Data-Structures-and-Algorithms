#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void GetSUM(int &sum, int N) {
        if (N < 1) return;

        sum += N;
        GetSUM(sum, N - 1);
    }

    int NnumbersSum(int N) {
        int sum = 0;
        GetSUM(sum, N);
        return sum;
    }
};

int main() {
    Solution obj;

    int n;
    cout << "Enter N: ";
    cin >> n;

    cout << "Sum = " << obj.NnumbersSum(n);

    return 0;
}