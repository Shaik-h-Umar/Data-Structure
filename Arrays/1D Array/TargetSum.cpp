//Find the total number of pairs in the array whose sum is equal to the given value X 
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[] = {3,4,6,7,1}; 
    int targetSum=8;
    int count = 0;
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);
    for(int i = 0 ; i<n ; i++){
        for(int j = i+1; j<n; j++){
            int sum = arr[i]+arr[j];
            if(sum == targetSum){
                cout<<"Pair Found : " <<arr[i] << " " <<arr[j];
                count++;
            } 
        }
    }
    cout<<"\nNumber of Pairs : "<<count;
    return 0;
}   