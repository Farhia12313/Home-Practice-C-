#include<iostream>
using namespace std;
class Dog{
    public:
    string bark(string sound);
};
string Dog :: bark(string sound){
    return sound;
}
int main(){
    Dog myDog;
   cout << myDog.bark("woof!");
    return 0;
}