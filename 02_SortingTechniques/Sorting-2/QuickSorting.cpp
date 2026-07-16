#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int QS(vector<int>& nums, int low, int high) {
        int pivot = nums[low];

        int i = low + 1;
        int j = high;

        while (i <= j) {
            if (nums[i] <= pivot && i <= j) {
                i++;
            }
            else if (pivot <= nums[j] && j >= i) {
                j--;
            }

            if (i <= j) {
                swap(nums[i], nums[j]);
            }
        }

        swap(nums[j], nums[low]);

        return j;
    }

    void f(vector<int>& nums, int low, int high) {
        if (low >= high) {
            return;
        }

        int pIndex = QS(nums, low, high);

        f(nums, low, pIndex - 1);
        f(nums, pIndex + 1, high);
    }

    vector<int> quickSort(vector<int>& nums) {
        f(nums, 0, nums.size() - 1);
        return nums;
    }
};

int main() {
    vector<int> nums = {7, 4, 1, 5, 3};

    Solution obj;

    vector<int> result = obj.quickSort(nums);

    cout << "Sorted Array: ";

    for (int num : result) {
        cout << num << " ";
    }

    cout << endl;

    return 0;
}