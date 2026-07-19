#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int secondLargestElement(vector<int>& nums) {
        int largest = INT_MIN;
        int sLargest = INT_MIN;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > largest) {
                sLargest = largest;
                largest = nums[i];
            }
            else if (nums[i] < largest && nums[i] > sLargest) {
                sLargest = nums[i];
            }
        }

        return sLargest;
    }
};

int main() {
    Solution solution;

    vector<int> nums = {10, 5, 8, 10, 3};

    int result = solution.secondLargestElement(nums);

    cout << "Second largest element: " << result << endl;

    return 0;
}