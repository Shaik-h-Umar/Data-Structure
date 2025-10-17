#include<iostream>
using namespace std;
int main(){
    int num = 10; //4 bytes
    cout<<"The size of the int variable is : "<<(sizeof(num))<<endl;

    float num1 = 10.5; //4 bytes
    cout<<"The size of the float variable is : "<<(sizeof(num1))<<endl;

    char ch = 'a'; //1 bytes
    cout<<"The size of the char variable is : "<<(sizeof(ch))<<endl;

    bool flag = true; //1 bytes
    cout<<"The size of the bool variable is : "<<(sizeof(flag))<<endl;

    string str = "Hello World"; // Dynamic allocation
    cout<<"The size of the string variable is : "<<(sizeof(str))<<endl;
    // the str size is not fixed the size is placed dynamically by the compiler

    double num2 = 10.55; //8 bytes
    cout<<"The size of the double variable is : "<<(sizeof(num2))<<endl;
    return 0;
}
/*
Output:
The size of the int variable is : 4
The size of the float variable is : 4
The size of the char variable is : 1
The size of the bool variable is : 1
The size of the string variable is : 32
The size of the double variable is : 8
*/