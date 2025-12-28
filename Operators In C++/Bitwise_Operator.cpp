#include<iostream>
using namespace std;
int main(){
    int num1 , num2;
    num1 = 5;
    num2 = 10;

    //Bitwise operators are used to perform bitwise operations
    // (&,|,^,~,<<,>>)

    //left shift operator (<<) it is used to shift the bits to the left
    cout<<"The left shift : "<<(num1<<2)<<endl; //basically it multiplies the number by 2^2

    //right shift operator (>>) it is used to shift the bits to the right
    cout<<"The right shift : "<<(num2>>2)<<endl; //basically it divides the number by 2^2
    
    //and operator (&) it is used to perform a bitwise AND operation
    cout<<"The and operation : "<<(num1&num2)<<endl; //basically it returns the common bits of both the numbers

    //or operator (|) it is used to perform a bitwise OR operation 
    cout<<"The or operation : "<<(num1|num2)<<endl; //basically it returns the common bits of both the numbers4

    //xor operator (^) it is used to perform a bitwise XOR operation
    cout<<"The xor operation : "<<(num1^num2)<<endl; //basically it returns the uncommon bits of both the numbers

    return 0;
}
/*
Output:
The left shift : 20
The right shift : 2
The and operation : 0       
The or operation : 15       
The xor operation : 15
*/