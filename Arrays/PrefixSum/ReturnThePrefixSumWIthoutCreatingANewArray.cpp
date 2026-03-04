/*
Given an integer array a return the prefix sum returning sum in the same array without creatin a new array 
*/
#include <iostream>
#include <vector>
using namespace std;

int main() {
    cout<<"Enter the size of the array : "<<endl;
    int size;
    cin>>size;
    cout<<"Enter the elements of the array : ";
    vector<int> v;
    for(int i= 0; i<size; i++){
        int elements;
        cin>>elements;
        v.push_back(elements);
    }
    cout<<"After Prefix Sum : "<<endl;
    for(int i =0;i<size;i++){
        cout<<v[i]<<"  ";
        v[i+1] += v[i];
    }
    return 0;
}   