#include<iostream>
using namespace std;

int Age(int a){
    if(a>=18){
        cout<<"Eligible";
    }
    else{
        cout<<"Not Eligible";
    }
    return 0;
}

int main(){
    int age;   
    cout<<"Enter your age : ";
    cin>>age;
    Age(age);
    return 0;
}
