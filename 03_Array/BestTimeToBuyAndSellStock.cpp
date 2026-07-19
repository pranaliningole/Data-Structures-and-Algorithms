#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int stockBuySell(vector<int> arr, int n){
        int minPrice = INT_MAX;
        int maxProfit = 0;

        for(int i = 0; i < n; i++){
            minPrice = min(minPrice, arr[i]);
            maxProfit = max(maxProfit, arr[i] - minPrice);
        }

        return maxProfit;
    }
};

int main() {
    Solution obj;

    vector<int> arr = {7, 1, 5, 3, 6, 4};

    cout << "Maximum Profit: " << obj.stockBuySell(arr, arr.size()) << endl;

    return 0;
}