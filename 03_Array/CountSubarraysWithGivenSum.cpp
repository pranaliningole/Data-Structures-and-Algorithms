#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mpp;
        mpp[0] = 1;

        int sum = 0;
        int count = 0;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];

            if (mpp.find(sum - k) != mpp.end()) {
                count += mpp[sum - k];
            }

            mpp[sum]++;
        }

        return count;
    }
};

int main() {
    vector<int> nums = {1, 1, 1};
    int k = 2;

    Solution obj;
    int ans = obj.subarraySum(nums, k);

    cout << "Number of subarrays with sum " << k << " = " << ans << endl;

    return 0;
}