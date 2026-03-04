/*
Q3 - Given a vector arr [] sorted in increasing order of n size and an integer x, find if there exists
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
using namespace std;
int main() {
    int arr[] = {5,10,15,20,26};
    int size = sizeof(arr)/sizeof(arr[0]);
    int x = 10;
    int left = 0;
    int right = 1;
    bool flag = false;
    while(right < size){
        int difference = arr[right] - arr[left];
        if(difference == x){
            flag = true;
            break;
        }
        else if(difference < x){
            right++;      // need bigger difference
        }
        else{
            left++;       // need smaller difference
        }
        // avoid same index comparison
        if(left == right)
            right++;
    }

    cout << (flag ? "Yes" : "No");

    return 0;
}
