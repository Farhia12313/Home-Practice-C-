#include<iostream>
using namespace std;
class book{
    public:
    string title;
    string author;
    int year;
};
int main(){
    book myBook;
    myBook.title = " Matilda ";
    myBook.author = " Roald Dahl";
    myBook.year = 1988;
    cout << "First Book Title =" << myBook.title << endl;
    cout << "First Book Author =" << myBook.author << endl;
    cout << "First Book Year =" << myBook.year << endl;
    book myBook1;
    myBook1.title = " The Giving Tree ";
    myBook1.author = " Shel Silverstein";
    myBook1.year = 1964;
    cout << "Scound Book Title = " << myBook1.title  <<  endl;
    cout << "Scound Book Author = " << myBook1.author  << endl;
    cout << "Scound Book Year =" << myBook1.year << endl;
    return 0;
}