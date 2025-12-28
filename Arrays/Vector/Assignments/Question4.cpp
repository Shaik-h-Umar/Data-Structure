/*
Q4 - Given a vector arr[] sorted in increasing order. Return an array of squares of each
number sorted in increasing order. Where size of vector 1<size<101.
Input: [0,1,2,3]
Output: [0,1,4,9]
Input: [-5,-4,-3,-2,-1]
Output: [1,4,9,16,25]
Input: [-4,-3,-1,0,2,10]
Output: [0,2,4,9,16,100]

sab se pahle jo given vector hai uske elements ko ham square nikalenge 
and then ek vector mai push kar denge and then usko sort kar denge
*/
#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector <int> arr = {-4,-3,-1,0,2,10}; //[0,2,4,9,16,100] expected 
    vector <int> v;

    for(int i = 0 ; i< arr.size(); i++){
        int square;
        square = arr[i]*arr[i];
        v.push_back(square);
    }
    cout<<"After squaring the elements of the vector : "<<endl;
    for(int i = 0; i<v.size(); i++){
        cout<< v[i] <<" ";
    }

    //Now lets sort the vector 
    // for(int pass = 0; pass<v.size()-1; pass++ ){
    //     for(int i = 0; i<v.size()-1-pass; i++){
    //         if(v[i]>v[i+1]){
    //             int temp; 
    //             temp = v[i];
    //             v[i] = v[i+1];
    //             v[i+1] = temp;
    //         }
    //     }
    // }

    //modern method 
    sort(v.begin(), v.end());
    cout<<"After sorting the squared vector : "<<endl;
    for(int i = 0; i<v.size(); i++){
        cout<< v[i] <<" ";
    }


    return 0;
}