/*#include<iostream>
using namespace std;
int main()
{
    int doorCode = 1234;
    if(doorCode == 1231)
    cout << "Open the door";
    else 
    cout << "Don't open the door";
    return 0;
}*/
#include <iostream>
using namespace std;

int main() {
  int doorCode = 1337;

  if (doorCode == 1337) {
    cout << "Correct code.\nThe door is now open.\n";
  } else {
    cout << "Wrong code.\nThe door remains closed.\n";
  }

  return 0;
}
