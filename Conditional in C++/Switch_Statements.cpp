/* letters are vowel or consonent using switch statement*/

// #include<iostream>
// using namespace std;
// int main(){
//     char ch;
//     cout<<"Enter the character : ";
//     cin>>ch;
//     switch(ch){
//         case 'a':
//         case 'A':
//         case 'e':
//         case 'E':
//         case 'i':
//         case 'I':
//         case 'o':
//         case 'O':
//         case 'u':
//         case 'U':
//             cout << "Vowel: " << ch;
//             break;
//         default:
//             cout << "Consonant: " << ch;
//             break;
//     }
//     return 0;
// }

/*

The error is in the case statements. In C++, the expression
 like 'a' || 'A' evaluates to a boolean value (true), 
 not as multiple cases. This is because the || 
 (logical OR) operator works on boolean expressions, 
 not for matching multiple values in a switch statement
switch (ch)
    {
    case 'a' || 'A':
        cout<<"Vowel : " <<ch;
        break;
    case 'e' || 'E':
        cout<<"Vowel : " <<ch;
        break;
    case 'i' || 'I':
        cout<<"Vowel : " <<ch;
        break;
    case 'o' || 'O':
        cout<<"Vowel : " <<ch;
        break;
    case 'u' || 'U':
        cout<<"Vowel : " <<ch;
        break;
    default:
        cout<<"Consonent : " <<ch;
        break;
    }
*/

//Design a calculator to perform basic mathematic operations
//(+,-,*,/,%)

// #include<iostream>
// using namespace std;
// int main(){
//     char choose;
//     int number1,number2;
//     cout<<"Enter the first number : ";
//     cin>> number1;
//     cout<<"Enter the second number : ";
//     cin>> number2;
//     cout<<"Enter the operation you have to perform (+,-,*,/,%) : ";
//     cin>>choose;
//     switch(choose){
//         case '+':
//         cout<<"Addition of two number is : " <<number1+number2;
//         break;
//         case '-':  
//         cout<<"Subtraction of two number is : " <<number1-number2;
//         break;
//         case '*':
//         cout<<"Multiplication of two number is : " <<number1*number2;
//         break;
//         case '/':   
//         cout<<"Division of two number is : " <<number1/number2;
//         break;
//         case '%':
//         cout<<"Remainder of two number is : " <<(number1%number2);
//         break;
//         default:
//         cout<<"Invalid operation";
//         break;
//     }
//     return 0;
// }


//write a program to print the day based on number
#include<iostream>
using namespace std;
int main(){
    int day;
    cout<<"Enter the number to see the day of the week:   ";
    cin>>day;
    switch (day)
    {
    case 1:
        cout<<"Monday";
        break;
    case 2:
        cout<<"Tuesday";
        break;
    case 3: 
        cout<<"Wednesday";
        break;
    case 4:
        cout<<"Thursday";
        break;
    case 5:
        cout<<"Friday";
        break;
    case 6:
        cout<<"Saturday";
        break;
    case 7:
        cout<<"Sunday";
        break;
    default:
        cout<<"Invalin number entered! Please enter between 1 to 7";
        break;
    }
    return 0;
}
//exprssion is the