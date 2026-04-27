#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Hello";
    for(int i = 0; i<s.length(); i++){
        if(i % 2 !=0){
            s[i] = 'a';
        }
    }
    cout<<s<<endl;
    return 0;
}