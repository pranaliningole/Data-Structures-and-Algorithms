#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xor1 = 0;

        for (int i = 0; i < nums.size(); i++) {
            xor1 ^= nums[i];
        }

        return xor1;
    }
};

int main() {
    Solution sol;

    vector<int> nums = {4, 1, 2, 1, 2};

    int result = sol.singleNumber(nums);

    cout << "Single number: " << result << endl;

    return 0;
}