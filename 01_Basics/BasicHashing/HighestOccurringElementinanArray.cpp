#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mostFrequentElement(vector<int>& nums) {
        map<int, int> mpp;

        for (int i = 0; i < nums.size(); i++) {
            mpp[nums[i]]++;
        }

        int maxi = INT_MIN;
        int ans = -1;

        for (auto it : mpp) {
            if (it.second > maxi) {
                maxi = it.second;
                ans = it.first;
            }
        }

        return ans;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {4, 4, 2, 2, 3};

    cout << "Most Frequent Element: "
         << obj.mostFrequentElement(nums) << endl;

    return 0;
}