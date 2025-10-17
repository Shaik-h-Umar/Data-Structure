/*
There are several unary operators like (+,-,!,++,--)
These operators are used to perform operations on a single operand.
*/

#include<iostream>
using namespace std;
int main(){
    int num = 9;
    cout << "The value of num is: " << num << endl;
    //here we are printing the original value of num1
    cout << "The value of num++ is: " << num++ << endl;
    //here we have used num++ which means that it is post increment operator :- 
    //it which means that it will first print the value of num and then increment the value of num by 1
    cout << "The value of num is: " << num << endl;
    //here we have printed the value of num after incrementing it by 1
    cout << "The value of ++num is: " << ++num << endl;
    //here we have used ++num which means that it is pre increment operator :-
    //it which means that it will first increment the value of num by 1 and then print the value of num
    cout << "The value of num is: " << num << endl;
    //here we have printed the value of num after incrementing it by 1
    
    cout<< "The value of num -- is: " << num-- << endl;
    //here we have used num-- which means that it is post decrement operator :-
    //it which means that it will first print the value of num and then decrement the value of
    cout<< "The value of num is: " << num << endl;
    //here we have printed the value of num after decrementing it by 1
    cout<< "The value of --num is: " << --num << endl;
    //here we have used --num which means that it is pre decrement operator :-
    //it which means that it will first decrement the value of num by 1 and then print
    cout<< "The value of num is: " << num << endl;
    //here we have printed the value of num after decrementing it by 1

    cout<< "The value of !num is: " << !num << endl;
    //here we have used !num which means that it is logical not operator :-
    //it which means that it will return 0 if the value of num is 0 and 1 if the value of num is 1
    cout<< "The value of +num is: " << +num << endl;
    //here we have used +num which means that it is unary plus operator :-
    //it which means that it will return the value of num as it is
    cout<< "The value of -num is: " << -num << endl;
    //here we have used -num which means that it is unary minus operator :-
    //it which means that it will return the negative value of num
    


    int nu = +8; // here the plus denotes the sign of the value
    int n = -8; // here the minus denotes the sign of the value

    
    return 0;
}

/*
Output:
The value of num is: 9
The value of num++ is: 9
The value of num is: 10
The value of ++num is: 11
The value of num is: 11
The value of num -- is: 11        
The value of num is: 10
The value of --num is: 9
The value of num is: 9
The value of !num is: 0
The value of +num is: 9
The value of -num is: -9
*/