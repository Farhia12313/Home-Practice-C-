#include<iostream>
using namespace std;
class Rectangle{
    private:
    int leangth;
    int breadth;
    public:
    Rectangle(int l,int b){
        leangth = l;
        breadth = b;

    }
    int Area(){
        return leangth * breadth;
    }
};
int main(){
    Rectangle rect1(5,4);
    Rectangle rect2(8,5);
    cout<< "Area of first Rectangle: "<< rect1.Area()<<endl;
    cout<< "Area of second Rectangle: "<< rect2.Area()<<endl;
    return 0;
}