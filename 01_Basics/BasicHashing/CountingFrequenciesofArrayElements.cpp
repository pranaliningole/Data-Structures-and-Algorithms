#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> countFrequencies(vector<int>& nums) {
        map<int, int> mpp;

        for (int i = 0; i < nums.size(); i++) {
            mpp[nums[i]]++;
        }

        vector<vector<int>> ans;

        for (auto it : mpp) {
            ans.push_back({it.first, it.second});
        }

        return ans;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {4, 2, 2, 1, 4, 4, 3};

    vector<vector<int>> ans = obj.countFrequencies(nums);

    cout << "Element Frequency\n";
    for (auto &v : ans) {
        cout << v[0] << "       " << v[1] << '\n';
    }

    return 0;
}