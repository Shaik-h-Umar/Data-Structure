//print the sum of the first n natural numbers where n is the input
#include<iostream>
using namespace std;
int main(){
    int num,res=0,i=1;
    cout<<"Enter the number to find the sum of digit"<<endl;
    cin>>num;
    while(i<=num){
        res=res+i;
        i++;
    }
    cout<<"The sum of the natural numbers is: "<<res;
    return 0;
}
/*
Output:
Enter the number to find the sum of digit
3
The sum of the natural numbers is: 6
 because 3 comes after 1 2 and then 3 so 1+2+3 = 6 so the answer is 6
*/