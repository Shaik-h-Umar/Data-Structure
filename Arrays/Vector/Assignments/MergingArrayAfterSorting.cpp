/*
Assignment Questions
Q1 - Given two vectors arr1[] and arr2[] of size m and n sorted in increasing order. Merge the
two arrays into a single sorted array of size m+n.
Input: arr1=[1,2,3] arr2=[4,5,6]
Output: arr=[1,2,3,4,5,6]
Input: arr1=[1,3,5] arr2=[2,4,6]
Output: arr=[1,2,3,4,5,6]
*/
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr1 = {1, 2, 3, 6};
    vector<int> arr2 = {4, 8, 5, 7};
    vector<int> arr;

    for (int i = 0; i < arr1.size(); i++){
        arr.push_back(arr1[i]);
    }

    for (int i = 0; i < arr2.size(); i++){
        arr.push_back(arr2[i]);
    }
    cout<<"After Merging two vectors "<<endl;
    for (int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }

    //Bubble Sort we have used
    for (int pass = 0; pass < arr.size() - 1; pass++){ 
        for (int i = 0; i < arr.size() - 1 - pass; i++){ 
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }

    cout << endl;
    cout<<"After Sorting it using Bubble Sort : "<<endl;
    for (int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    return 0;
}