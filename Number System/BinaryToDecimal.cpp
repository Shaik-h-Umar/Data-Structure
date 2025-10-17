//Binary to decimal conversion 
/*
binary number 1101 = 1*2^3 + 1*2^2 + 0*2^1 + 1*2^0 = 13
*/
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    cout << "Enter the binary number: ";
    int binaryNumber;
    cin >> binaryNumber;

    int i = 0;      // power of 2
    int decimal = 0;

    while (binaryNumber != 0) {
        int lastDigit = binaryNumber % 10;         // extract last digit (0 or 1)
        decimal = decimal + lastDigit * pow(2, i); // add contribution
        binaryNumber = binaryNumber / 10;          // remove last digit
        i++;                                       // increase power
    }

    cout << "Decimal number = " << decimal << endl;
    return 0;
}
