// //WAP to print good job if the score of the user is above 80 and if 50-80 then can improve 
// //and if less then 50 then poor performence.

// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int score;
// //     cout<<"Enter your score: ";
// //     cin>>score;
// //     if(score>80){
// //         cout<<"Good job";
// //     }
// //     else if(score>=50 &&score<=80){
// //         cout<<" Can improve";
// //     }
// //     else{
// //         cout<<"poor performence";
// //     }
// //     return 0;
// // }

// /* Write a program to take input from user for cost price (C.P) and selling price (S.P)
// and calculate profit or loss 

// #include<iostream>
// using namespace std;
// int main(){
//     float cp,sp;
//     cout<< "Enter the cost price of the product : ";
//     cin>>cp;
//     cout<< "Enter the selling price of the product : ";
//     cin >>sp;
//     if(sp>cp){
//         cout << "You have made a profit" <<endl;
//         cout << "Your profit is : "<<sp-cp <<endl;
//     }
//     else{
//         cout << "You have made a loss" <<endl;
//         cout << "Your loss is : "<<cp-sp <<endl;
//     }
//     return 0;
// } */

// /* find the maximum of three numbers using if else statement 
// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,c;
//     cout<<"Enter the first number : ";
//     cin>>a;
//     cout<<"Enter the second number : ";
//     cin>>b;
//     cout<<"Enter the third number : ";
//     cin>>c;
//     if(a>b&&a>c){
//         cout<< "Maximum number is : "<<a;
//     }
//     else if(b>a&&b>c){
//         cout<< "Maximum number is : "<<b;
//     }
//     else{
//         cout<< "Maximum number is : "<<c;
//     }
//     return 0;
// } */

// /* find the maximum of three numbers using nested if else statement */
// #include<iostream>
// using namespace std;
// int main(){
//     int x,y,z;
//     cout<<"Enter the first number : ";
//     cin>>x;
//     cout<<"Enter the second number : ";
//     cin>>y;
//     cout<<"Enter the third number : ";
//     cin>>z;
//     if(x>y){
//         if(x>z){
//             cout<< "Maximum number is : "<<x;
//         }
//         else{
//             cout<< "Maximum number is : "<<z;
//         }
//     }
//     else{
//         if(y>z){
//             cout<< "Maximum number is : "<<y;
//         }
//         else
//         cout<< "Maximum number is : "<<z;
//     }
//     return 0;
// }

//Program to print even and odd numbers
// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cout<<"Enter the number to check whether it is even or odd : "<<endl;
//     cin>>num;
//     if(num % 2 == 0){
//         cout<<"The number is even";
//     }
//     else{
//         cout<<"The number is odd";
//     }
//     return 0;
// }

/*
Output:
Enter the number to check whether it is even or odd : 
5
The number is odd
*/  

//WAP to check the person is a child if less then == 12 and 12 to 18 teenager and above 18 is adult
// #include<iostream>
// using namespace std;
// int main(){
//     int age;
//     cout<<"Enter the age of the person : ";
//     cin>>age;
//     if(age<=12){
//         cout<<"Hey you are a child";
//     }
//     else if(age>12 && age<=18){
//         cout<<"Hey you are a teenager";
//     }
//     else{
//         cout<<"Hey you are an adult";
//     }
//     return 0;
// }

/*
Output:
Enter the age of the person : 19
Hey you are an adult.#include<iostream>
using namespace std;

int main(){
    int score;
    cout<<"Enter your score: ";
    cin>>score;

    if(score > 80){
        cout<<"Good job";
    }
    else if(score >= 50 && score <= 80){
        cout<<"Can improve";
    }
    else{
        cout<<"Poor performance";
    }

    float cp, sp;
    cout<< "Enter the cost price of the product : ";
    cin>>cp;
    cout<< "Enter the selling price of the product : ";
    cin >>sp;

    if(sp > cp){
        cout << "You have made a profit" <<endl;
        cout << "Your profit is : "<<sp-cp <<endl;
    }
    else if(sp < cp){
        cout << "You have made a loss" <<endl;
        cout << "Your loss is : "<<cp-sp <<endl;
    }
    else{
        cout << "No profit or loss" <<endl;
    }

    int a, b, c;
    cout<<"Enter the first number : ";
    cin>>a;
    cout<<"Enter the second number : ";
    cin>>b;
    cout<<"Enter the third number : ";
    cin>>c;

    if(a > b && a > c){
        cout<< "Maximum number is : "<<a;
    }
    else if(b > a && b > c){
        cout<< "Maximum number is : "<<b;
    }
    else{
        cout<< "Maximum number is : "<<c;
    }

    int x, y, z;
    cout<<"Enter the first number : ";
    cin>>x;
    cout<<"Enter the second number : ";
    cin>>y;
    cout<<"Enter the third number : ";
    cin>>z;

    if(x > y){
        if(x > z){
            cout<< "Maximum number is : "<<x;
        }
        else{
            cout<< "Maximum number is : "<<z;
        }
    }
    else{
        if(y > z){
            cout<< "Maximum number is : "<<y;
        }
        else
        cout<< "Maximum number is : "<<z;
    }

    int num;
    cout<<"Enter the number to check whether it is even or odd : "<<endl;
    cin>>num;

    if(num % 2 == 0){
        cout<<"The number is even";
    }
    else{
        cout<<"The number is odd";
    }

    int age;
    cout<<"Enter the age of the person : ";
    cin>>age;

    if(age <= 12){
        cout<<"Hey you are a child";
    }
    else if(age > 12 && age <= 18){
        cout<<"Hey you are a teenager";
    }
    else{
        cout<<"Hey you are an adult";
    }

    return 0;
}
*/

#include<iostream>
using namespace std;
int main(){
    int x =60, y =90;
    if (y%x ==0){
        cout<<"Good";
    }
    else{
        cout<<"Bad";
    }
    return 0;
}