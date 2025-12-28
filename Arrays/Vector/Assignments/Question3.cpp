/*
Q3 - Given a vector arr[] sorted in increasing order of n size and an integer x, find if there exists (Medium)
a pair in the array whose absolute difference is exactly x.
Given: n>0
Input: [5,10,15,20,26] x= 10
Output: Yes
Input: [5,6,7,8,9] x=4
Output: Yes
Input: [9,23,45,69,78] x=56
Output: No
*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {5, 10, 15, 20, 26};
    int x = 10;
    int n = arr.size();

    int i = 0, j = 1;
    bool found = false;

    while (i < n && j < n) {
        int diff = arr[j] - arr[i];
        if (diff == x) {
            found = true;
            break;
        } else if (diff < x) {
            j++;
        } else { // diff > x
            i++;
            if (i == j) j++; // keep j ahead of i
        }
    }

    cout << (found ? "Yes" : "No");
    return 0;
}
