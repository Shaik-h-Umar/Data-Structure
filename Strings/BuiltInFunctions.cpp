#include <iostream> 
#include <algorithm>
#include <string>
using namespace std;
//input a string of even length and reverse the first half 
int main() {
    string s = "Hello World";
    int n = s.length();
    reverse(s.begin(), s.begin() + n/2);
    cout<<s<<endl;
    return 0;
}