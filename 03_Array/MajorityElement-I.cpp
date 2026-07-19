#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt0 = 0;
        int el = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++) {
            if (cnt0 == 0) {
                cnt0 = 1;
                el = nums[i];
            }
            else if (nums[i] == el) {
                cnt0++;
            }
            else {
                cnt0--;
            }
        }

        int cnt1 = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] == el) {
                cnt1++;
            }
        }

        if (cnt1 > n / 2) {
            return el;
        }

        return -1;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};

    cout << "Majority Element: " << obj.majorityElement(nums) << endl;

    return 0;
}