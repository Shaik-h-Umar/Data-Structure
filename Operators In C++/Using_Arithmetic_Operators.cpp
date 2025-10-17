#include<iostream>
using namespace std;
int main(){
    int num1 , num2;
    cout<<"Enter the first number: "<<endl;
    cin>>num1;
    cout<<"Enter the second number: "<<endl;
    cin>>num2;

    //Arithmetic operators are used to perform mathematical operations
    // (+,-,*,/,%,++,--)

    cout<<"The sum of two numbers is: "<<num1+num2<<endl; 
    cout<<"The difference of two numbers is: "<<num1-num2<<endl;
    cout<<"The product of two numbers is: "<<num1*num2<<endl;
    cout<<"The quotient of two numbers is: "<<num1/num2<<endl;
    cout<<"The remainder of two numbers is: "<<num1%num2<<endl;
    num1++;
    num2--;
    cout<<"Incremental operator"<<num1<<endl;
    cout<<"Decremental operator"<<num2<<endl;
    return 0;
}

/*
Output:
Enter the first number: 
10
Enter the second number: 
5
The sum of two numbers is: 15
The difference of two numbers is: 5
The product of two numbers is: 50 
The quotient of two numbers is: 2 
The remainder of two numbers is: 0
Incremental operator11
Decremental operator4
*/