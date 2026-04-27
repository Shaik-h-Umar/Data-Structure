//Input a string and return the number of times the neighbouring characters are different from each other 
#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "abbcdeffghh";
    int count = 0;

    for(int i = 1; i < s.size(); i++){
        if(s[i] != s[i-1]){
            count++;
        }
    }

    cout << "The count is: " << count << endl;
    return 0;
}