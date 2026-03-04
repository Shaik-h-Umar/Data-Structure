/*
QI - Given two vectors arr][] and arr2[] of size m and n sorted in increasing order. Merge the
two arrays into a single sorted array of size m+n.
Input: arr]=[1,2,3] arr2=[4,5,6]
Output: arr=[1,2,3,4,5,6]
Input: arrl= [1,3,5] arr2=|2,4,6]
Output: arr= [1,2,3,4,5,6]
*/
#include <iostream>
using namespace std;

int main() {
    int arr1[] = {1,6,7,10};
    int arr2[] = {0,1,3,8,11,12,15,18};
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);

    //code to merge the sorted arrays
    int resultant[m+n];
    int i = 0; //will help us to iterate on array 1
    int j = 0; //will help us to iterate on arrat 2
    int k = 0; //will help us to iterate on resultant array

    while(i<m and j<n){
        //both i and j should be the within the limits of arr1 and arr2
        if(arr1[i]<arr2[j]){
            resultant[k] = arr1[i];
            k++;
            i++;
        }
        else{
            resultant[k] = arr2[j];
            j++;
            k++;
        }
    }
    while(i<m){
        //arr2 is exhausted and we still got elements left in the arr1
        resultant[k] = arr1[i];
        i++;
        k++;
    }
    while(j<n){
        //arr1 is exhausted and we still got elements left in the arr2
        resultant[k] = arr2[j];
        j++;
        k++;
    }

    //displaying result
    for(int i = 0; i<m+n; i++){
        cout<<resultant[i]<< "   ";
    }
    
    return 0;
}