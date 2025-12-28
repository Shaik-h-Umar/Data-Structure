/*
Remaining operator of Misc are:
    1. Dot and arrow operators
    2. casting operator
    3. & address operator
    4. pointer operator
*/

#include<iostream>
using namespace std;
int main(){
    float num = 3.3;
    cout<<"Typecasting operator : "<<(int (num)); // this is casting operator we are converting float to int
    // the output will be 3 because the int does not store the decimal values

    int num1 = 10;
    cout<<"The address of num in the memory is : "<<&num1; // this is address operator
    // the output will be the memory address of num1 :- 0x6e799ff9d8
    //Note: The address is dynamic it changes every time the program is executed

    int *ptr = &num1; // this is pointer operator
    // the output will be the memory address of num1 :- 0x6e799ff9d8
    cout<<"The value of ptr is : "<<ptr;
    return 0;
}

/*
Output:
Typecasting operator : 3
The address of num in the memory is : 0x6e799ff9d8
The value of ptr is : 0x6e799ff9d8
*/