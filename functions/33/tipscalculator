#include <iostream>
using namespace std;

void tips_menu(){
  cout<<"    Leave a Tip?"<<endl;
  cout<<"15%\t20%\t25%\n";
  cout<<"       Custom\n\n";
}

int totalbill(float bill, int addon){
  int result = bill * addon + bill;
  return result;
}

int sharedbills(float total, int people){
  int endtotal = total / people;
  return endtotal;
}

int main() {
  tips_menu(); 
  cout<<"total is: " << "$" << totalbill(46.59, 2) << "\n";
  cout<<"shared bill for each individual is: $"<<sharedbills(110,4)<<"\n";
}
