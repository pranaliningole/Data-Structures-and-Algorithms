#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotateArray(vector<int>& nums, int k) {
        int n = nums.size();

        if (n == 0) return;

        k %= n;

        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
        reverse(nums.begin(), nums.end());
    }
};

int main() {
    Solution sol;

    vector<int> nums = {1, 2, 3, 4, 5, 6};
    int k = 2;

    sol.rotateArray(nums, k);

    cout << "Array after left rotation by " << k << " positions: ";

    for (int num : nums) {
        cout << num << " ";
    }

    return 0;
}