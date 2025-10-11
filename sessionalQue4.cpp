#include<iostream>
using namespace std;
class Employee {
    public:
    virtual double calculatePay() = 0;

};
class salariedEmployee:public Employee {
    double monthlySalary;
    public:
    salariedEmployee(double salary){
        monthlySalary = salary;
    }
    double calculatePay(){
        return monthlySalary;
    }
};
class HourlyEmployee:public Employee{
    double hourlyRate,hoursWorked;
    public:
    HourlyEmployee(double rate,double hours){
          hourlyRate = rate;
          hoursWorked = hours;    
    }
    double calculatePay (){
        return hourlyRate * hoursWorked;
    }

};
int main(){
    salariedEmployee s(30000);
    HourlyEmployee h(200,160);
    cout<< "SlariedEmployee pay " << s.calculatePay()<<endl;
    cout<<"HourlyEmployee pay " << h.calculatePay() << endl;
    return 0;
}