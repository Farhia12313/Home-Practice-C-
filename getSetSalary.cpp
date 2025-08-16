#include<iostream>
using namespace std;
class Employee{
private:
int salary;
public:
void setSalary(int s){
    salary = s;
}
int getSalary(){
    return salary;
}
} ;
int main(){
    Employee mysalary;
    mysalary.setSalary(3000000);
    cout << "My salary is  " <<  mysalary. getSalary();
    return 0;
}