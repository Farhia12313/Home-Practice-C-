#include<iostream>
using namespace std;
class myClass{
    public:
    void drive(){
        cout << " This is my car" << endl;
    }
};
int main (){
    myClass car;
    car.drive();
    return 0;
}