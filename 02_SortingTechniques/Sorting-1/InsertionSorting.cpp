#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> insertionSort(vector<int>& nums) {
        for (int i = 1; i < nums.size(); i++) {
            int j = i;

            while (j > 0 && nums[j - 1] > nums[j]) {
                swap(nums[j - 1], nums[j]);
                j--;
            }
        }

        return nums;
    }
};

int main() {
    vector<int> nums = {12, 11, 13, 5, 6};

    Solution obj;
    vector<int> ans = obj.insertionSort(nums);

    cout << "Sorted Array: ";
    for (int x : ans) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}