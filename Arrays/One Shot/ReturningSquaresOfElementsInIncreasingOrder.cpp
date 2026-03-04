/*
Q4 - Given a vector arr|] sorted in increasing order. Return an array of squares of each
number sorted in increasing order. Where size of vector 1‹ size ‹ 101.
Input: [0,1,2,3]
Output: [0,1,4,9]
Input: [-5,- 4,-3,-2,-1]
Output: [1,4,9,16,25]
Input: (-4,-3,-1,0,2,10 ]
Output: [0,2,4,9,16,100]
*/
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int arr[] = {-10,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int result[size];
    int i = 0;
    int j = size - 1;
    int k = size - 1;   // position to fill result
    while(i <= j){
        int leftSquare = arr[i] * arr[i];
        int rightSquare = arr[j] * arr[j];
        if(leftSquare > rightSquare){
            result[k] = leftSquare;
            i++;
        }
        else{
            result[k] = rightSquare;
            j--;
        }
        k--;
    }
    for(int i = 0; i < size; i++){
        cout << result[i] << " ";
    }
    return 0;
}
