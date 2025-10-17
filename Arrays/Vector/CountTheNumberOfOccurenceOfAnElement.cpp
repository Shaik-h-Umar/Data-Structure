//count the number of occurences of an particular element
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(5);
    cout<<"Enter the elements of the vector : "<<endl;
    for(int i = 0; i<v.size(); i++){
        cin>>v[i];
    }

    cout<<"Enter the number whose no of occurence you have to find : "<<endl;
    int x ; 
    cin>>x;
    int count = 0;
    for(int i = 0; i<v.size(); i++){
        if(v[i]==x){
            count++;
        }
    }
    cout<<"The number of occurence of "<<x<<" is : "<<count;
    return 0;
}