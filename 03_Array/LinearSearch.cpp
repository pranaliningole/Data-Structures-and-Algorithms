#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int linearSearch(vector<int>& nums, int target) {
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                return i;
            }
        }

        return -1;
    }
};

int main() {
    Solution sol;

    vector<int> nums = {5, 3, 8, 2, 9};
    int target = 8;

    int result = sol.linearSearch(nums, target);

    cout << "Index of target: " << result << endl;

    return 0;
}