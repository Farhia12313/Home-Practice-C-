#include<iostream>
using namespace std;

class Student
{
  double grade;
  char name[30];
  public:
  
  // Declaration of function
  void getdata();
  
  // Declaration of function
  void putdata();
  
  // Added: Getter function to access grade
  double getGrade();
};

// Defining the function outside 
// the class
void Student::getdata()
{ 
  cout << "Enter Student Name : ";
  cin >> name;
  cout << "Enter Student Grade : ";  // Fixed: Changed "Id" to "Grade"
  cin >> grade;
}

// Defining the function outside 
// the class
void Student::putdata()
{
  cout << "Student name: " << name << endl;  // Fixed: Added space and colon
  cout << "Student grade: " << grade << endl;  // Fixed: Added colon
}

// Added: Getter function definition
double Student::getGrade() {
    return grade;
}

// Driver code
int main()
{
  // This is an array of objects having
  // maximum limit of 30 Students
  Student students[30]; 
  int n;
  cout << "Enter Number of Students - ";
  cin >> n;
  
  // Accessing the function
  for(int i = 0; i < n; i++) 
    students[i].getdata();
  
  cout << "Students Data - " << endl;
  
  // Accessing the function
  for(int i = 0; i < n; i++) 
    students[i].putdata();

    double total = 0;
    for(int i = 0; i < n; i++) {
        total += students[i].getGrade();  // Fixed: Using getter function
    }
    double average = total / n;  // Fixed: Divided by n, not 5

    cout << " Average: " << average << endl;
    return 0;
}