//Find the last occurence of an element x in an given vector
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v; //initializing the vector;
    //now we will insert the values of vector
    v.push_back(1);
    v.push_back(2);
    v.push_back(1);
    v.push_back(4);
    v.push_back(5);
    v.push_back(1);

    //now we have to find the last occurence of an element 
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<"which elements occurence you have to find : ";
    int x;
    cin>>x;
    int count=-1; // if the user will enter the element which is not present in the vector it will return -1 which means element not
    //here we are checking from the begining 
    for(int i=0; i<v.size();i++){
        if(v[i]==x){
            count=i;
        }
    }
    cout<<"The last occurence of the element is : "<<count;

    //here we will check from the end this is more efficient and more time saving
    for(int i=v.size()-1; i>=0;i--){
        if(v[i]==x){
            count=i;
            break;// if the element found it will break the loop because of this numbers of iteration will be less.
        }
    }
    cout<<"The last occurence of the element is : "<<count;
    return 0;
}