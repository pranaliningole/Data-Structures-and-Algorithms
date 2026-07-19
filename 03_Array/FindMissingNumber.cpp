#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int xor1 = 0;
        int xor2 = 0;

        for (int i = 0; i < nums.size(); i++) {
            xor1 ^= nums[i];
        }

        for (int i = 1; i <= nums.size(); i++) {
            xor2 ^= i;
        }

        return xor1 ^ xor2;
    }
};

int main() {
    Solution sol;

    vector<int> nums = {3, 0, 1};

    int result = sol.missingNumber(nums);

    cout << "Missing number: " << result << endl;

    return 0;
}