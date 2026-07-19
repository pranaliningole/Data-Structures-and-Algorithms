#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int largestElement(vector<int>& nums) {
        int maxi = nums[0];

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] > maxi) {
                maxi = nums[i];
            }
        }

        return maxi;
    }
};

int main() {
    Solution solution;

    vector<int> nums = {2, 5, 1, 3, 0};

    int result = solution.largestElement(nums);

    cout << "Largest element: " << result << endl;

    return 0;
}