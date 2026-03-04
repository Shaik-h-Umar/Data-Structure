/*
Q2 - Given a vector arr] sorted in increasing order of n size and an integer x, find if there exists
a pair in the array whose sum is exactly x.
Given: n>0
Input: [-1,0,1,2,3] x=2
Output: Yes
Input: (1,2,3,4] x=9
Output: No
*/
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5,6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int left = 0;
    int right = size-1;
    int integer = 5;
    bool flag =  false;

    while(left < right){
        int sum = arr[left] + arr[right];
        if(sum == integer){
            flag = true;
            break;
        }
        else if(sum < integer){
            left++;
        }
        else{
            right--;
        }
    }
    cout<<(flag ? "Yes" : "No");

    return 0;
}