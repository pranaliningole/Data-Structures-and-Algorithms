#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> selectionSort(vector<int>& nums) {
        for (int i = 0; i < nums.size() - 1; i++) {
            int minIndex = i;

            for (int j = i; j < nums.size(); j++) {
                if (nums[j] < nums[minIndex]) {
                    minIndex = j;
                }
            }

            swap(nums[i], nums[minIndex]);
        }

        return nums;
    }
};

int main() {
    vector<int> nums = {64, 25, 12, 22, 11};

    Solution obj;
    vector<int> ans = obj.selectionSort(nums);

    cout << "Sorted Array: ";
    for (int x : ans) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}