#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void studentGrade(int marks) {
        if (marks >= 90)
            cout << "Grade A";
        else if (marks >= 70)
            cout << "Grade B";
        else if (marks >= 50)
            cout << "Grade C";
        else if (marks >= 35)
            cout << "Grade D";
        else
            cout << "Fail";
    }
};

int main() {
    Solution obj;

    int marks;
    cout << "Enter marks: ";
    cin >> marks;

    if (marks < 0 || marks > 100) {
        cout << "Invalid marks!" << endl;
        return 0;
    }

    obj.studentGrade(marks);

    return 0;
}