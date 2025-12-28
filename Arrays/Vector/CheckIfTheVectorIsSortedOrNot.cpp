//check if the vector is sorted or not
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v = {1,2,3,4,5};
    bool flag = true;
    for(int i = 0; i<v.size()-1; i++){
        if(v[i]> v[i+1]){
            flag = false;
            break;
        }
    }
    if(flag){
        cout<<"The vector is sorted";
    }
    else{
        cout<<"The vector is not sorted";
    }
    return 0;
}