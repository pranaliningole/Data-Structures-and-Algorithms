#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());

        int longest = 0;

        for(auto it : st) {
            if(st.find(it - 1) == st.end()) {
                int x = it;
                int cnt = 1;

                while(st.find(x + 1) != st.end()) {
                    x++;
                    cnt++;
                }

                longest = max(longest, cnt);
            }
        }

        return longest;
    }
};

int main() {
    Solution obj;

    vector<int> nums = {100, 4, 200, 1, 3, 2};

    cout << "Longest Consecutive Sequence Length: ";
    cout << obj.longestConsecutive(nums) << endl;

    return 0;
}