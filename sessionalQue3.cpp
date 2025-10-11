#include<iostream>
using namespace std;
class BaseA{
    public:
    void printMessage(){
        cout << "Message from BaseA" << endl;

    }

};
class BaseB{
    public:
    void printMessage(){
        cout << "Message from BaseB" << endl; 
}
};
class Derived : public BaseA,public BaseB{
    public:
    void useMessage(){
        cout << "resolve ambiguity"<< endl;
        BaseA::printMessage();
        BaseB::printMessage();
    }
    void printMessage(){
        cout << "Message from Derived" << endl; 
}
};
int main(){
    Derived d;
    d.useMessage();
    d.printMessage();
    
    d.BaseA::printMessage();
    d.BaseB::printMessage();
    return 0;
}
