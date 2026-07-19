#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestSubarray(vector<int> &nums, int k) {
        int n = nums.size();
        int sum = nums[0];
        int maxlen = 0;
        int left = 0, right = 0;

        while (right < n) {
            while (left <= right && sum > k) {
                sum -= nums[left];
                left++;
            }

            if (sum == k) {
                maxlen = max(maxlen, right - left + 1);
            }

            right++;
            if (right < n) {
                sum += nums[right];
            }
        }

        return maxlen;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {1, 2, 1, 1, 1, 3, 2};
    int k = 3;

    cout << "Longest Subarray Length: " << obj.longestSubarray(nums, k) << endl;

    return 0;
}