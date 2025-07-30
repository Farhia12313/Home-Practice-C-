#include<iostream>
using namespace std;
class car{
    public:
    string brand;
    string model;
    int year;
    car(string x, string y,int z);
};
 car :: car(string x, string y, int z){
    brand = x;
    model = y;
    year = z;
}
int main(){
    car car1("toyota","x5",2022);
    car car2("BMW","Y5",2000);
    cout << car1.brand << "  " << car1.model << "  " << car1.year << endl;
    cout << car2.brand << "  " << car2.model << "  " << car2.year;
    return 0;
}
//void car :: car()
