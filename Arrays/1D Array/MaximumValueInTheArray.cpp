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
    int max;
    max = array[0];
    for(int i = 0; i<size; i++){
        if(max<array[i]){
            max = array[i];
        }
    }
    cout<<"MAX element is : "<<max;   
    return 0;
} 