/*
Check if we can partition the array into two subarrays with
equal sum. More formally, check that the prefix sum of a part
of the array is equal to the suffix sum of rest of the array.
*/
//Apan kya karte sab se pahle size of the array user se lete and then elements array ka le lete uske baaad apan mid nikaalte 
//mid kaise nikalenge : -  array[0] + array[v.size()-1]/2 and after that ham array  apan dono array ka prefix sum nikalenge and then compare karenge
#include <iostream>
#include <vector>
using namespace std;

bool PrefixAndSuffixSum(vector <int> &v){
    int total_sum = 0;
    for(int i = 0; i<v.size(); i++){
        total_sum += v[i];
    }
    int prefix_sum = 0;
    for(int i = 0; i<v.size(); i++){
        prefix_sum += v[i];
        int suffix_sum = total_sum - prefix_sum;

        if(suffix_sum == prefix_sum){
            return true;
        }
    }
    return false;
}

int main() {
    int size; 
    cout<<"Enter the size of the array : "<<endl;
    cin>>size;
    vector<int> v;
    cout<<"Enter the elements of the array : "<<endl;
    for(int i = 0; i<size; i++){
        int elements;
        cin>>elements;
        v.push_back(elements);
    }
    cout<<PrefixAndSuffixSum(v)<<endl;
    return 0;
}