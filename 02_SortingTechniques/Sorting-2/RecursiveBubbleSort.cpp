#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void BS(vector<int>& nums, int n) {
        if (n < 1) {
            return;
        }

        for (int j = 0; j < n - 1; j++) {
            if (nums[j] > nums[j + 1]) {
                swap(nums[j], nums[j + 1]);
            }
        }

        BS(nums, n - 1);
    }

    vector<int> bubbleSort(vector<int>& nums) {
        BS(nums, nums.size());
        return nums;
    }
};

int main() {
    vector<int> nums = {5, 3, 8, 1, 2};

    Solution obj;

    vector<int> result = obj.bubbleSort(nums);

    cout << "Sorted Array: ";

    for (int num : result) {
        cout << num << " ";
    }

    cout << endl;

    return 0;
}