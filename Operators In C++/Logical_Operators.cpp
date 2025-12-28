#include<iostream>
using namespace std;
int main(){
    bool exp1 , exp2;
    exp1 = true;
    exp2 = false;

    //Logical operators are used to combine two boolean values
    // (&&,||,!) it always returns a boolean value

    cout<<"The logical and of two boolean values is: "<<(exp1 && exp2) <<endl;
    cout<<"The logical or of two boolean values is: "<<(exp1 || exp2) <<endl;
    cout<<"The logical not of two boolean values is: "<<(!exp1) <<endl;
    cout<<"The logical not of two boolean values is: "<<(!exp2) <<endl;
    return 0;
}

/*
Output:
The logical and of two boolean values is: 0
The logical or of two boolean values is: 1
The logical not of two boolean values is: 0
The logical not of two boolean values is: 1
*/