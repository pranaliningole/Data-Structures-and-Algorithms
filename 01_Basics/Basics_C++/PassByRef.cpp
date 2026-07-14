#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void reverse(vector<int>& arr) {
        int low = 0;
        int high = arr.size() - 1;

        while (low < high) {
            swap(arr[low], arr[high]);
            low++;
            high--;
        }
    }
};

int main() {
    int n;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Solution obj;
    obj.reverse(arr);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}