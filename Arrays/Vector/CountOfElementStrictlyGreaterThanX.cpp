// Count the number of elements strictly greater than value x ;
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(5);
    int elements;
    cout<<"Enter the elements of the vector : "<<endl;
    for(int i = 0; i<v.size(); i++){
        cin>>v[i];
    }

    cout<<"Enter the x value we will check how many numbers are greater than it: "<<endl;
    int x ; 
    cin>>x;
    int count = 0;

    for(int i = 0; i<v.size(); i++){
        if(v[i]>x){
            count++;
        }
    }
    cout<<"The number of elements greater than "<<x<<" is : "<<count;
    return 0;
}