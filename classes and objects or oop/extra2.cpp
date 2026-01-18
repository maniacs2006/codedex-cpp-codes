#include <iostream>
#include <string>
using namespace std;

class Student{
  public:
  string name;
  int year;
  double gpa;
  bool enrolled;

  void display_info(){
    cout<<"the student "<<name<<"s gpa is "<<gpa<<"!\n";
  }
};

int main() {
  Student Hussain;

  Hussain.name = "Hussain Ahmad";
  Hussain.year = 1;
  Hussain.gpa = 2.3;
  Hussain.enrolled = true;
  Hussain.display_info();  
}
