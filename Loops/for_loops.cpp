//Print the first multiple of 5 which is also a multiple of 7
#include<iostream>
using namespace std;
int main(){
    for(int i =1; ;i++){
        if(i%5==0 && i%7==0){
            cout<<"The first number which is multiple by 5 and 7 is : "<<i<<endl;
            break;
        }

    }
    return 0;
}