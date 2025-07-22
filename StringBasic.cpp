#include <iostream>
#include <string>
using namespace std;

int main() {
  string greeting = "Hello";
  cout << greeting << endl;
  string firstName = "John";
  string lastName = "Doe";
  string fullName = firstName + lastName;//string fullName = firstName + " " + lastName;
  cout << fullName << endl;//string fullName = firstName.append(lastName);
   string x = "10";
  string y = "20";
  string z = x + y;
  cout << z <<endl;
  string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  cout << "The length of the txt string is: " << txt.length() <<endl;
  /* string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  cout << "The length of the txt string is: " << txt.size();*/
  string myString = "Hello";
  cout << myString[0] << endl;
  cout << myString[1] << endl;
  cout << myString[myString.length()-1] << endl;
  /*  \' ->'->Single quote
\"->"->	Double quote
\\->\->	Backslash  */
string txt = "We are the so called \"Vikings\" from the north";
  cout << txt << endl;
  //string input
 /* string fName;
cout << "Type your first name: ";
cin >> fName; // get user input from the keyboard
cout << "Your name is: " << fName <<endl;*///it only prints a single word
string holeName;
cout << "Type your full name: ";
getline (cin, holeName);
cout << "Your name is: " << holeName; //it print the hole name
//string greeting1 = "Hello";  // Regular String//
//char greeting2[] = "Hello";  // C-Style String (an array of characters)
  
return 0;
}
