/*Given two numbers a and b write a program to print all the prime numbers present between a and b*/

#include<iostream>
#include<cmath>
using namespace std;

int PrimeNumber(int a, int b) {
    for (int i = a; i <= b; i++) {
        if (i < 2) continue;  // 0 and 1 are not prime

        bool isPrime = true;
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << i << " ";
        }
    }
    return 0;
}

int main() {
    int starting, ending;
    cout << "Enter the starting number : ";
    cin >> starting;
    cout << "Enter the ending number : ";
    cin >> ending;

    cout << "Prime numbers between " << starting << " and " << ending << " are: ";
    PrimeNumber(starting, ending);
    return 0;
}
//Prime numbers are those numbers which are divisible by 1 and itself. Shaikh Umar  ho