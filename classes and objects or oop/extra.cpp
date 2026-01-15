#include <iostream>
#include <string>
using namespace std;

class Student {
    public:
  string name;
  int year;
  double gpa;
  bool enrolled;
};

int main(){
    Student ferris;
  ferris.name = "Ferris Bueller";
  ferris.year = 12;
  ferris.gpa = 3.81;
  ferris.enrolled = true;
    cout << "Name: " << ferris.name << "\n";
    cout << "Year: " << ferris.year << "\n";
    cout << "GPA: " << ferris.gpa << "\n";
    cout << "Enrolled: " << (ferris.enrolled ? "Yes" : "No") << "\n";
}
