#include<iostream>
using namespace std;
class Complex{
    private:
    double real;
    double imag;
    public:
    Complex(double r, double i){
        real = r;
        imag = i;
    }
    Complex operator+(const Complex&other){
        return Complex(real+other.real,imag+other.imag);

    }
    void display(){
        cout<< real;
        if(imag>=0){
            cout<<" + "<<imag<<"i"<<endl;
        }
        else
        cout<< " - " << -imag <<"i"<<endl;
    }
};
int main(){
    Complex C1(10.5,5.2);
    Complex C2(2.3,-3.1);
    Complex sum = C1 + C2;
    cout<<"First number: ";
     C1.display();
    cout<<"Second number: ";
     C2.display();
    cout<<"Sum: ";
     sum.display();
    return 0;
}