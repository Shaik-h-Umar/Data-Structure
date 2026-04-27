#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    //substr(index,length);
    string s = "abcdpqrs";
    int n = s.length();
    cout << s.substr(n/2,n/2 ) << endl; // Output: World
    return 0;
}