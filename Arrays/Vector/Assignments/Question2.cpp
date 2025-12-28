/*
Q2 - Given a vector arr[] sorted in increasing order of n size and an integer x, find if there exists
a pair in the array whose sum is exactly x.
Given: n>0
Input: [-1,0,1,2,3] x=2
Output: Yes
Input: [1,2,3,4] x=9
Output: No

Ek sorted vector diya hai (increasing order me), aur ek integer x diya hai.
Tera kaam hai check karna ki kya us vector me aise 2 elements ka pair exist karta hai jinka sum exactly x ke barabar ho.
*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {-1, 0, 1, 2, 3};
    int x = 2;
    // Do pointer banao
    int *left = &arr[0]; // pehla element ka address
    int *right = &arr[arr.size() - 1];  // last element ka address
    bool found = false;
    // Jab tak left < right
    while (left < right) {
        int sum = *left + *right;// dereference karke value nikal rahe
        //sirf agar left likhega to address calculate karega and if we are using *left then it will fetch the value from the left 
        if (sum == x) {
            found = true;
            break;
        } 
        else if (sum < x) {
            left++;   // pointer ko aage badhao
        } 
        else {
            right--;  // pointer ko peeche lao
        }
    }
    if (found) cout << "Yes";
    else cout << "No";
    return 0;
}
