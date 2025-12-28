//pattern number 1 : 
// ******
// ******
// ******
// here number of rows = 3 and number of columns = 6
// #include<iostream>
// using namespace std;
// int main(){
//     for(int j = 1 ; j <= 3 ; j++){
//             for(int i = 1 ; i <= 6 ; i++){
//                 cout<<"*";
//             }
//             cout<<endl;
//         }
//     return 0;
// }

// pattern number 2 :
// ******
// *    *
// *    *
// ******

// #include<iostream>
// using namespace std;
// int main(){
//     for (int i = 1; i < 5 ; i++)
//     {
//         for (int j = 1 ; j < 7; j++)
//         {
//             if(i == 2 || i ==3 ){
//                 cout<<"*";
//                 cout<<"    ";
//                 cout<<"*"; 
//                 break;
//             }
//             cout<<"*";
            
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }

//pattern number = 4 :
//  *
//  **
//  ***
//  ****
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i = 1; i <=4 ;i++){
//         for(int j = 1; j<=i;j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// pattern number = 5 : 
//  ****
//  ***
//  **
//  *
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i = 4; i!=0 ; i--){
//         for(int j = 1 ; j<=i; j++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// pattern number = 6 :
//    *
//   *** 
//  *****
// *******
// row number = 4
// #include<iostream>
// using namespace std;
// int main(){
//     for(int i = 1 ; i<=4 ; i++){
//         for (int j = 1; j <=(4-i); j++)
//         {
//             cout<<" ";
//         }
//         for(int k = 1; k <=(2*i-1); k++){
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }




// Numerical Rectangular pattern Number 1 :
//      1234567
//      2345671
//      3456712
//      4567123
//      5671234
//      6712345
//      7123456
// #include<iostream>
// using namespace std;
// int main(){
//     int num; 
//     cin>> num;
//     for(int i = 1 ; i <=num; i++){
//         for (int j = i ; j<= num; j++){
//             cout<<j;
//         }
//         for (int k = 1; k <=(i-1);k++){
//             cout<<k;
//         }
//         cout<<endl;

//     }
//     return 0;
// }



// Numerical Pattern number 2 :
//      123456
//      123456
//      123456
//      123456
// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cout<<"Enter the number of rows : ";
//     cin>>num;
//     cout<<"Enter the number of number pattern";
//     int list;
//     cin>> list;
//     for(int i = 1 ; i <= num ; i++){
//         for(int j = 1 ; j<=list; j++){
//             cout<<j;
//         }
//         cout<<endl;
//     }
//     return 0;
// }



//Numerical Pattern Number 3 :
//      123456
//      1    6
//      1    6
//      123456
// #include<iostream>
// using namespace std;
// int main(){
//     int rows,columns;
//     cout<<"Enter the number of rows : ";
//     cin>>rows;
//     cout<<"Enter the number of columns : ";
//     cin>>columns;
//     for(int i = 1; i<=rows; i++){
//         for (int j = 1; j <=columns; j++){
//             if(i==1  || i==rows){
//                 cout<<j;
//             }
//             else{
//                 if (j==1 || j==columns){
//                     cout<<j;
//                 }
//                 else{
//                     cout<<" ";
//                 }
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }



//Numerical Pattern number 4 :
// 121212
// 212121
// 121212
// 212121
#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter the number of rows : ";
    cin>>row;
    int num = 1;
    for(int i = 1; i <=row; i++){
        for (int j = 1 ; j<=row; j++){
            cout<<num<<num+1;
        }
        cout<<endl;
    }
    return 0;
}   //hold your breath and feel the tense this is the end