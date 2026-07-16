#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> bubbleSort(vector<int>& nums) {
        int n = nums.size();

        for (int i = n; i >= 1; i--) {
            bool didswap = false;

            for (int j = 0; j < i - 1; j++) {
                if (nums[j] > nums[j + 1]) {
                    swap(nums[j], nums[j + 1]);
                    didswap = true;
                }
            }

            if (!didswap)
                break;
        }

        return nums;
    }
};

int main() {
    vector<int> nums = {64, 34, 25, 12, 22, 11, 90};

    Solution obj;
    vector<int> ans = obj.bubbleSort(nums);

    cout << "Sorted Array: ";
    for (int x : ans) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}