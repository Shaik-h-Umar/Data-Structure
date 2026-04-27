#include <iostream>
#include <string>
#include <vector>
using namespace std;
//Given n strings cosisting of integers 0 to 9. Return the index of the string which have maximum value                                 input  = 0122, 0123, 01234, 2142;                                   output = 5;
int main() {
    int count = 0;
    string maxS ="";
    vector<string> s = {"09222", "0123", "01234", "2142"};
    for(int i = 0; i<s.size(); i++){
        int num = stoi(s[i]);
        if(count<num){
            count = num;
            maxS = s[i];
        }
    }
    cout<<"Max string is : " <<maxS <<" count is : "<<count;

    return 0;
}