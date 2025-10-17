//write a function to print squares of first five natural
//numbers
#include<iostream>
using namespace std;
int NaturalNumbers(int n){
    for(int i=1;i<=n;i++){
        cout<<i*i<<endl;
    }
    return 0;
}
int main(){
    cout<<"Enter the N'th' natural number :";
    int num;
    cin>>num;
    NaturalNumbers(num);
    return 0;
}