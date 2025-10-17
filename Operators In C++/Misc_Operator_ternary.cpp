/* ternary operator  basically lets see the syntax of the ternary operator
(condition ? expression1 : expression2 )
if the condition is true then the expression1 will be executed if the 
condition is false then the expression2 will be executed.
if (age>=18) ? good : bad  -> example
*/

#include<iostream>
using namespace std;
int main(){
    int age = 18;
    (age>=18) ? cout<<"Good" : cout<<"Bad";
    return 0;
}

/*
Output:
Good
*/