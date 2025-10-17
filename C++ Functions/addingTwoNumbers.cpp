#include<iostream>
using namespace std;
int add(int a, int b){
    return a+b;
}
int add(int a, int b, int c){
    return a+b+c;
}
int add(float a, float b){
    return a+b;
}
int main(){
    int num1,num2, num3 = 5;
    cout<<"Enter the first number :";
    cin>>num1;
    cout<<"Enter the second number :";
    cin>>num2;
    cout<<" Sum is from the method having 2 parameters : " << add(num1,num2);
    cout<<" Sum is from the method having 3 parameters : " << add(num1,num2,num3);
    float num4 = 2.5 , num5 = 3.5;
    cout<<" Sum is from the floating  : " << add(num4,num5);
    return 0;
}