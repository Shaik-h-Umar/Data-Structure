/*
Q5 - Given a vector arr[] sorted in increasing order of n size and an integer x, find the number
of unique pairs that exist in the array whose absolute sum is exactly x.
Input: [1,2,3,4,6] x=7
Output: 2
Explanation: 1,6 and 3,4 sum to 7
Input: [3,1,3,5,3] x=6
Output: 2
Explanation: The unique pairs are 3,3 and 1,5
Input: [2,2,2] x=4
Output: 1
Explanation: The only unique pair is 2,2
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr = {3,1,3,5,3};
    int x = 6;

    // Step 0: Sort array
    sort(arr.begin(), arr.end());

    int i = 0, j = arr.size() - 1;
    int ans = 0;

    while (i < j) {
        int sum = arr[i] + arr[j];
        if (sum == x) {
            ans++;
            int leftVal = arr[i];
            int rightVal = arr[j];
            // Skip duplicates
            while (i < j && arr[i] == leftVal) i++;
            while (i < j && arr[j] == rightVal) j--;
        } else if (sum < x) {
            i++;
        } else { // sum > x
            j--;
        }
    }

    cout << "Number of unique pairs: " << ans << endl;
    return 0;
}
