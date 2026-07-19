#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isSorted(vector<int>& nums) {
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] > nums[i + 1]) {
                return false;
            }
        }

        return true;
    }
};

int main() {
    Solution solution;

    vector<int> nums = {1, 2, 3, 4, 5};

    bool result = solution.isSorted(nums);

    cout << boolalpha;
    cout << "Is the array sorted? " << result << endl;

    return 0;
}