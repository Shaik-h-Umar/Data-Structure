#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

int main() {
    // string str = "I am a student of Btech";
    // //Stringstream is an object
    // stringstream ss(str);
    // string temp;
    // while(ss >> temp){
    //     cout<<temp<<endl;
    // }



    //Given a sentence str return the word that is occurring most number of times in that sentence
    string str = "Umar is persuing Btech and he is learning DSA.";
    stringstream ss(str);
    string temp;
    int count = 1 , maxCount = 1;
    vector<string> v;
    while(ss >> temp){
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    for(int i =1; i<v.size(); i++){
        if(v[i] == v[i-1]){
            count++;
        }
        else{
            count = 1;
        }
        maxCount = max(maxCount,count);
    }
    for(int i =1; i<v.size(); i++){
        if(v[i] == v[i-1]){
            count++;
        }
        else{
            count = 1;
        }
        if(count == maxCount){
            cout<<v[i] << " :)  "<<maxCount <<" times" <<endl;
        }
        maxCount = max(maxCount,count);
    }
    return 0;
}