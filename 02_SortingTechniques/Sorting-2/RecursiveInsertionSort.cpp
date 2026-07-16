#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void IS(vector<int>& nums, int i, int n) {
        if (i > n) {
            return;
        }

        int j = i;

        while (j > 0 && nums[j - 1] > nums[j]) {
            swap(nums[j], nums[j - 1]);
            j--;
        }

        IS(nums, i + 1, n);
    }

    vector<int> insertionSort(vector<int>& nums) {
        if (!nums.empty()) {
            IS(nums, 0, nums.size() - 1);
        }

        return nums;
    }
};

int main() {
    vector<int> nums = {5, 3, 8, 1, 2};

    Solution obj;

    vector<int> result = obj.insertionSort(nums);

    cout << "Sorted Array: ";

    for (int num : result) {
        cout << num << " ";
    }

    cout << endl;

    return 0;
}