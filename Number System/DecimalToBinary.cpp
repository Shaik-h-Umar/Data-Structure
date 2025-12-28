//parity number nikaal ke karna hai
#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter the decimal number ( )base10 : ";
    cin>>number;
    int power = 1;
    int answer = 0;
    while (number > 0){
        int parityDigit = number % 2;
        answer += parityDigit*power;
        power *= 10;
        number /= 2;   
    }
    cout<<"Binary number = "<<answer<<endl;
    return 0;
}