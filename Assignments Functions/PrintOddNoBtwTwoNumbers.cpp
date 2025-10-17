#include<iostream>
using namespace std;

int Odd(int s, int e){
    for(s = 1 ; s <= e ; s++){
        if(s%2 !=0){
            cout<<s<<" ";
        }
    }
    return 0;
}

int main(){
    int starting,ending;
    cout<<"Enter the starting number : ";
    cin >> starting;
    cout<<"Enter the ending number : ";
    cin>> ending;
    
    Odd(starting,ending);
    return 0;
}
