#include <iostream>
#include<math.h>
using namespace std;

class NegativeValueException {};

double calculateSquareRoot(double value) {
    if (value < 0) {
        throw NegativeValueException();
    }
    return sqrt(value * value);
}

int main() {
    try {
        cout << "Square of 9: " << calculateSquareRoot(9) << endl;
    } catch (NegativeValueException) {
        cout << "Error: Negative number!" << endl;
    }

    try {
        cout << "Square of -4: " << calculateSquareRoot(-4) << endl;
    } catch (NegativeValueException) {
        cout << "Error: Negative number!" << endl;
    }

    return 0;
}