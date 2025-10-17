// //Print the sum of the stream of N integers in the input using do while loop
// #include<iostream>
// using namespace std;
// int main(){
//     int num,sum=0;
//     cout<<"Enter the length of the stream : "<<endl;
//     cin>>num;
//     cout<<"Enter the integers : ";
//     do{
//         int n;
//         cin>>n;
//         sum = sum+n;
//         num--;
//     }while(num>0);
//     cout<<"Sum of the series of the integers is : "<<sum;
//     return 0;
// }


//print all the values between 1 to 50 except the numbers divisible by 3
//use fo continue statement;
#include<iostream>
using namespace std;
int main(){
    for(int i=1;i<=50;i++){
        if(i%3==0){
            continue;
        }
        cout<<i<<endl;
    }
    return 0;
}