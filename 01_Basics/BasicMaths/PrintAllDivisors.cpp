#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> divisors(int n) {
        if (n == 0) return {};

        vector<int> ans;

        for (int i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                ans.push_back(i);

                if (i != n / i)
                    ans.push_back(n / i);
            }
        }

        sort(ans.begin(), ans.end());
        return ans;
    }
};

int main() {
    Solution obj;

    int n;
    cout << "Enter a number: ";
    cin >> n;

    vector<int> ans = obj.divisors(n);

    cout << "Divisors: ";
    for (int divisor : ans) {
        cout << divisor << " ";
    }
    cout << endl;

    return 0;
}