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

    cout<<"Enter the element you have to find : "<<endl;
    int element;
    cin>>element;
    bool flag = true;

    for(int i = 0; i<size; i++){
        if(element == array[i]){
            cout<<"The element is found at the index : "<<i;
            flag = true;
            break;
        }
    }
    if(!flag){
        cout<<"The element not found";
    }
    return 0;
}