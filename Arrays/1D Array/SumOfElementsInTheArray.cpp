#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the size of the array : ";
    int size;
    cin>>size;
    int array[size];

    cout<<"Enter the elements of the array : " <<endl;
    for(int i = 0; i<size; i++){
        cin>>array[i];
    }
    int sum=0;
    for(int i = 0; i<size; i++){
        sum = sum + array[i];
    }
    cout<<"The sum of the array is : "<<sum;   
    return 0;
}