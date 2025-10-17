#include<iostream>
using namespace std;
int main(){
    int num1 , num2;
    cout<<"Enter the first number: "<<endl;
    cin>>num1;
    cout<<"Enter the second number: "<<endl;
    cin>>num2;

    //Relational operators are used to compare two values
    // (>,<,==,!=,>=,<=) it always returns a boolean value

    cout<<"The first number is greater than the second number: "<<(num1>num2) <<endl;
    cout<<"The first number is less than the second number: "<<(num1<num2) <<endl;
    cout<<"The first number is equal to the second number: "<<(num1==num2) <<endl;
    cout<<"The first number is not equal to the second number: "<<(num1!=num2) <<endl;
    cout<<"The first number is greater than or equal to the second number: "<<(num1>=num2) <<endl;
    cout<<"The first number is less than or equal to the second number: "<<(num1<=num2) <<endl;
    return 0;
}

/*
Output:
Enter the first number: 
10
Enter the second number: 
9
The first number is greater than the second number: 1
The first number is less than the second number: 0
The first number is equal to the second number: 0
The first number is not equal to the second number: 1
The first number is greater than or equal to the second number: 1   
The first number is less than or equal to the second number: 0 
*/