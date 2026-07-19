#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
        int n = nums.size();
        vector<int> temp;

        if (n == 0) {
            return {};
        }

        int leader = nums[n - 1];
        temp.push_back(nums[n - 1]);

        for (int i = n - 2; i >= 0; i--) {
            if (nums[i] > leader) {
                leader = nums[i];
                temp.push_back(nums[i]);
            }
        }

        reverse(temp.begin(), temp.end());
        return temp;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {10, 22, 12, 3, 0, 6};

    vector<int> ans = obj.leaders(nums);

    cout << "Leaders: ";
    for (int x : ans) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}