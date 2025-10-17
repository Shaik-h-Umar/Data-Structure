#include<iostream>
using namespace std;
void Welcome(){
    cout<<"Welcome to the DSA course just keep it up with the consistency";
}
int main(){
    //string abc = Welcome(); if we are trying to do so then it will through 
    // me error because the return type of the function is void == null you cant store null values
    Welcome(); //correct way to call the void functions
    return 0;
}