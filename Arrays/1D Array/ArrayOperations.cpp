#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    cout<<sizeof(arr);
    int ar[4];
    cout<<ar;

    int array[] = {1,2,3,4,5};
    //size of array = last element-1 hota hai then if we want to access the element of the array then what logic can we create think it......what we can do is 

    //sizeof(array) will return the size of the acutual array.          we are taking the data type of the array as int  int contains 4 bit of data                                                             so the sizeof(array) will return  4 * 5 = 20                        and the for getting the size we will subtract it from the 0th index because of array size = size-1 hence the sum will return  20 / 4 = 5
    int sum = sizeof(array)/sizeof(array[0]);
    cout<<sum<<endl;

    for(int i = 0 ; i<sum; i++){
        cout<<array[i]<<"  ";
    }


    cout<<endl  <<"we can traverse the array with the help of foreach loop also : ";

    //foreach loop traverse the element not the index thats why we will pass the element not the index here   and remember that it will traverse each and every element of the array so it is slow as compare to for loop;

    for(auto var : array){
        cout<<var << "  ";
    }

    cout<<endl  <<"we can traverse the array with the help of while loop also : ";

    //here we need to define the array index first so we can define the condition;

    int index = 0;
    while(index<sum){
        cout<<array[index]<<"  ";
        index++;
    }

    //ARRAY INPUT AND OUTPUT
    int arrays[5];
    for(int i = 0; i<5; i++){
        cout<<"Enter the element for the index "<<i<<" : ";
        cin>>arrays[i];
    }
    for(int i = 0; i<5; i++){
        cout<<"The element at the index "<<i<<" is : "<<endl;
        cout<<arrays[i]<<"  "<<endl;
    }

    //Taking input using foreach Loop

    return 0;
}