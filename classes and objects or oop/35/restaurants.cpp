#include <iostream>
#include <string>
using namespace std;

class Restaurant {
  public:
  string name;
  string category;
  double rating;
  string price;
  bool delivery;
};

int main() {
  Restaurant peter_luger;
  Restaurant zee_grill;
  Restaurant optp;

  peter_luger.name = "Peter Luger Steak House";
  peter_luger.category = "American";
  peter_luger.rating = 4.4;
  peter_luger.price = "$$$$";
  peter_luger.delivery = false;

  zee_grill.name = "Zee Grill";
  zee_grill.category = "Desi";
  zee_grill.rating = 4.0;
  zee_grill.price = "$$";
  zee_grill.delivery = true;

  optp.name = "OPTP";
  optp.category = "Fast Food";
  optp.rating = 4.3;
  optp.price = "$$$";
  optp.delivery = true;

  cout<<peter_luger.name<<"\n";
  cout<<peter_luger.category<<"\n";
  cout<<peter_luger.rating<<"\n";
  cout<<peter_luger.price<<"\n";
  cout<<(peter_luger.delivery ? "Yes": "No")<<"\n"<<endl;

  cout<<zee_grill.name<<"\n";
  cout<<zee_grill.category<<"\n";
  cout<<zee_grill.rating<<"\n";
  cout<<zee_grill.price<<"\n";
  cout<<(zee_grill.delivery ? "Yes": "No")<<"\n"<<endl;

  cout<<optp.name<<"\n";
  cout<<optp.category<<"\n";
  cout<<optp.rating<<"\n";
  cout<<optp.price<<"\n";
  cout<<(optp.delivery ? "Yes" : "No")<<"\n";

}
