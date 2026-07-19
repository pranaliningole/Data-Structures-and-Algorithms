#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = -1;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                j = i;
                break;
            }
        }

        if (j == -1) return;

        for (int i = j + 1; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[j]);
                j++;
            }
        }
    }
};

int main() {
    Solution sol;

    vector<int> nums = {1, 0, 2, 0, 3, 4};

    sol.moveZeroes(nums);

    cout << "Array after moving zeroes: ";

    for (int num : nums) {
        cout << num << " ";
    }

    return 0;
}