/* 
Given an array of integers of size n. Answer q queries where
you need to print the sum of values in a given range of indices
from I to r (both included).
Note: The values of l and r in queries follow 1-based indexing.
*/
#include <iostream>
#include <vector>
using namespace std;

void Queries(vector<int> &v) {
    int n = v.size();
    // Prefix sum array
    vector<int> prefix(n);
    prefix[0] = v[0];
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] + v[i];
    }
    int left, right;
    cout << "Enter left and right (1-based indexing): ";
    cin >> left >> right;
    // Convert to 0-based indexing
    left--;
    right--;
    int sum;
    if (left == 0)
        sum = prefix[right];
    else
        sum = prefix[right] - prefix[left - 1];
    cout << "Sum of range = " << sum << endl;
}
int main() {
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    vector<int> v(size);
    cout << "Enter elements: ";
    for (int i = 0; i < size; i++) {
        cin >> v[i];
    }
    Queries(v);
    return 0;
} 
