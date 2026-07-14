#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void ReverseArray(int arr[], int low, int high) {
        if (low >= high)
            return;

        swap(arr[low], arr[high]);
        ReverseArray(arr, low + 1, high - 1);
    }

    void reverse(int arr[], int n) {
        if (n <= 1)
            return;

        ReverseArray(arr, 0, n - 1);
    }
};

int main() {
    Solution obj;

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    obj.reverse(arr, n);

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}