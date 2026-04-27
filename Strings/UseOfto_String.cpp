#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
//return total number of digit in a number without using any loop
int main() {
    int num = 123456;
    string s = to_string(num);
    cout << s.length() << endl; 
    return 0;
}