//find the difference between the sum of even indices and the sum of odd indices
// logic dekho ham log kya karenge ki sab se pahhle i%2==0 agar ye raha to sumofeven variable mai wo indices ki value ko add kar denge and agar condition false rahi then we will add into sumofodd variable and end mai apan usko minus kar denge for the difference 

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector <int> v = {1,2,3,4,5,6,7,8,9,10};
    int sumofodd=0, sumofeven=0, difference; 
    for(int i =0; i<v.size(); i++){
        if(i%2==0){ // i denotes indices
            sumofeven += v[i]; //indices wala element add karr rhe hai not the even element
        }
        else{
            sumofodd += v[i];
        }
    }
    cout<<"The sum of even indices is : "<<sumofeven<<endl;
    cout<<"The sum of odd indices is : "<<sumofodd<<endl;
    difference = sumofeven - sumofodd;
    cout<<"Differnce : "<<difference;
    return 0;
}