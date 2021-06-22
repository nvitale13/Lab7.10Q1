#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::abs;
using std::endl;

int main() {

int Numerator, Denominator = 0;

cout << "Enter Numerator: ";
cin >> Numerator;

cout << "Enter Denominator: ";
cin >> Denominator;

bool is_neg = false;
if ((Numerator < 0 && Denominator >= 0) || (Numerator >=0 && Denominator < 0)){
  is_neg = true;
}

Numerator = abs(Numerator);
Denominator = abs(Denominator);

if (Numerator > Denominator) {
  int whole = Numerator / Denominator;
  int remainder = Numerator % Denominator;
  
  if (is_neg) {
    cout << "-";
    } 
    cout << whole << " ";
    if (remainder > 0)
     cout << remainder << "/" << Denominator;

cout << "\n";
} else {
  if (is_neg) {
  cout << "-"; 
}

cout << Numerator << "/" << Denominator << "\n" << endl;


return 0;

}

}

