#include <iostream>
#include <vector>
using namespace std;
int main()
{
    //Pusu_Operations
    vector<int> v;
    cout <<"initial size : "<< v.size()<<endl; // it is starting one so the vector position is 0
    v.push_back(1);
    cout << "size : " << v.size()<<endl;
    cout << " capacity : " << v.capacity()<<endl;
    v.push_back(2);
    cout << "size : " << v.size()<<endl;
    cout << " capacity : " << v.capacity()<<endl;
    v.push_back(3);
    cout << "size : " << v.size()<<endl;
    cout << " capacity : " << v.capacity()<<endl;
    v.insert(v.begin()+1,9);
    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }

    v.resize(10);
    v.push_back(5);
    cout<<endl;
    cout<<"size : "<<v.size()<<endl;
    cout<<"capacity : "<<v.capacity()<<endl;


    //Deleting elements 
    v.pop_back();
    cout<<endl;
    cout<<"size : "<<v.size()<<endl;
    cout<<"capacity : "<<v.capacity()<<endl;
    v.erase(v.end()-9);
    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    v.clear();
     for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<size(v);
    cout<<v.capacity();



    /*
    vector functions: 
    
    */
    return 0;
}