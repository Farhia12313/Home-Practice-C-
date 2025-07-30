#include<iostream>
using namespace std;
class car{
    public:
    string brand;
    string model;
    int year;
};
int main()
{
    car myCar;
    myCar.brand = " BMW";
    myCar.model = "X5";
    myCar.year = 2022;
    cout << "Brand =" << myCar.brand << endl;
    cout << "Model =" << myCar.model << endl;
    cout << "Year =" << myCar.year << endl;
     car myCar1;
    myCar1.brand = " Toyota";
    myCar1.model = "Y5";
    myCar1.year = 2000;
    cout << "Brand =" << myCar1.brand << endl;
    cout << "Model =" << myCar1.model << endl;
    cout << "Year =" << myCar1.year << endl;
    return 0;
}