#include<iostream>
using namespace std;

void swap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void address(int *a){
    cout<<a<<endl;    //0x7ffc5f08132c  this is the address which will print the address is dynamically stored whenver we run the code so it may differ. 
    cout<<*a; //here we are de referencing the pointer so we will get the value stored on this address
}

int main(){
    int x = 9;
    int c = 2;
    int &y =x;
    swap(x,c);
    cout<<x<<" "<<c<<"\n";
    
    address(&x); /*here we are passing the address not the value so it will not give us error
    but when we will try to pass the integer type value it will not take it it will throw
    the error because in the parameter we have passed the pointer which stores the address of a variable*/
    return 0;
}
