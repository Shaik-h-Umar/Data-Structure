#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "What are you doing over here?";
    int count = 0;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'a' || s[i] == 'e' || s
[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U'){
            count++;
        }
        else if(s[i] == ' '){
            continue;
        }
    }
    return 0;
}