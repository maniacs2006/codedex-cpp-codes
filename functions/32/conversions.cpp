#include <iostream>
using namespace std;

int usd_to_pkr(int x){
  int conversion = 0;
  conversion = x * 280;
  return conversion;
}

int main() {
   cout<<usd_to_pkr(800);
}
