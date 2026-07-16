#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void Merge(vector<int>& nums, int low, int mid, int high) {
        int left = low;
        int right = mid + 1;

        vector<int> ans;

        while (left <= mid && right <= high) {
            if (nums[left] <= nums[right]) {
                ans.push_back(nums[left]);
                left++;
            }
            else {
                ans.push_back(nums[right]);
                right++;
            }
        }

        while (left <= mid) {
            ans.push_back(nums[left]);
            left++;
        }

        while (right <= high) {
            ans.push_back(nums[right]);
            right++;
        }

        for (int i = low; i <= high; i++) {
            nums[i] = ans[i - low];
        }
    }

    void Ms(vector<int>& nums, int low, int high) {
        if (low >= high) {
            return;
        }

        int mid = low + (high - low) / 2;

        Ms(nums, low, mid);
        Ms(nums, mid + 1, high);

        Merge(nums, low, mid, high);
    }

    vector<int> mergeSort(vector<int>& nums) {
        Ms(nums, 0, nums.size() - 1);
        return nums;
    }
};

int main() {
    vector<int> nums = {5, 2, 8, 1, 3, 7, 6, 4};

    Solution obj;

    vector<int> result = obj.mergeSort(nums);

    cout << "Sorted Array: ";

    for (int num : result) {
        cout << num << " ";
    }

    cout << endl;

    return 0;
}