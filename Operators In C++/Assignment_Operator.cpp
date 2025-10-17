#include<iostream>
using namespace std;
int main(){
    int num1 , num2;
    num1 = 10;
    num2 = 20;

    //Assignment operators are used to assign values to variables   
    //The assignment operator is = it is used to assign a value to a variable
    num1 = num2; // num1 is now 20
    cout << "Value of num1 is " << num1 << endl;
    cout << "Value of num2 is " << num2 << endl;

    //The assignment operator is += it is used to add a value to a variable
    num1 += 10; // num1 is now 30
    cout << "Value of num1 is " << num1 << endl;
    cout << "Value of num2 is " << num2 << endl;

    //The assignment operator is -= it is used to subtract a value from a variable
    num1 -= 10; // num1 is now 20
    cout << "Value of num1 is " << num1 << endl;
    cout << "Value of num2 is " << num2 << endl;

    //The assignment operator is *= it is used to multiply a value to a variable
    num1 *= 2; // num1 is now 40
    cout << "Value of num1 is " << num1 << endl;
    cout << "Value of num2 is " << num2 << endl;

    //The assignment operator is /= it is used to divide a value to a variable
    num1 /= 2; // num1 is now 20
    cout << "Value of num1 is " << num1 << endl;
    cout << "Value of num2 is " << num2 << endl;
     
    //The assignment operator is %= it is used to get the remainder of a value to a variable
    num1 %= 2; // num1 is now 0
    cout << "Value of num1 is " << num1 << endl;
    cout << "Value of num2 is " << num2 << endl;
    return 0;
}

/*
Output:
Value of num1 is 20
Value of num2 is 20
Value of num1 is 30
Value of num2 is 20
Value of num1 is 10
Value of num2 is 20
Value of num1 is 40
Value of num2 is 20
Value of num1 is 20
Value of num2 is 20
Value of num1 is 0
Value of num2 is 20
*/