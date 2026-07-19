#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        int left = 0;
        int right = m - 1;
        int top = 0;
        int bottom = n - 1;

        vector<int> ans;

        while (left <= right && top <= bottom) {

            // Left -> Right
            for (int i = left; i <= right; i++)
                ans.push_back(matrix[top][i]);
            top++;

            // Top -> Bottom
            for (int i = top; i <= bottom; i++)
                ans.push_back(matrix[i][right]);
            right--;

            // Right -> Left
            if (top <= bottom) {
                for (int i = right; i >= left; i--)
                    ans.push_back(matrix[bottom][i]);
                bottom--;
            }

            // Bottom -> Top
            if (left <= right) {
                for (int i = bottom; i >= top; i--)
                    ans.push_back(matrix[i][left]);
                left++;
            }
        }

        return ans;
    }
};

int main() {
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    Solution obj;
    vector<int> ans = obj.spiralOrder(matrix);

    cout << "Spiral Order: ";
    for (int x : ans) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}