#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    string s = "laaadle";
    // 2 aana chahiye;
    vector<int> v(26,0);
    for(int i = 0; i<s.size(); i++){
        char ch = s[i];
        int asc = (int)ch;
        v[asc - 97]++;  
    }
    int max = 0;
    for(int i = 0; i<v.size(); i++){
        if(v[i]>max){
            max = v[i];
        }
    }
    for(int i = 0; i<v.size(); i++){
        if(v[i] == max){
            int asc = i + 97;
            char ch = (char)asc;
            cout<< ch << " "<<max <<endl;
        }
    }
    return 0;
}