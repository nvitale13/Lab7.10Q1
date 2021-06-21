#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

int main() {

float Numerator;
float Denominator;
float Fraction;

cout << "Enter Numerator: ";
cin >> Numerator;

cout << "Enter Denominator: ";
cin >> Denominator;

Fraction = Numerator / Denominator; 

cout << "Mixed Fraction: " << Fraction << endl;


return 0;

}

