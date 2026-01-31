#include <iostream>
#include<cmath>
using namespace std;
class NegativeValueException{};
double calculateSquareRoot(double value){
    if(value<0){
        throw NegativeValueException();
    }
    return sqrt(value);

}
int main(){
    try{
        cout << "Square of 9:"<< calculateSquareRoot(9)<<endl;
    }
    catch(NegativeValueException){
        cout << "Error:Negative value!"<< endl;
    }
    try{
        cout<<"Squre of -4:"<< calculateSquareRoot(-4)<< endl;

    }
    catch(NegativeValueException){
        cout<< "Error:Negative value!"<< endl;
    }
    return 0;
}
