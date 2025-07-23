#include <iostream>
using namespace std;

int main() {
  int number;
  do {
    cout << "Enter a positive number: ";
    cin >> number;
    cout << number << endl;
    number++;
  } while (number > 0);

  return 0;
}

