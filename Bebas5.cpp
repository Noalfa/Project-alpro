#include <iostream>
using namespace std;

int main () {
  int n;

  cout<<"Masukkan bilangan: "; cin>>n;

  if(n%2 == 0) {
    cout<<n<<" Merupakan kelipatan 2"<<endl;
  }
  if (n%3 ==0) {
    cout<<n<<" Merupakan kelipatan 3"<<endl;
  }
  if (n%5 == 0) {
    cout<<n<<" Merupakan kelipatan 5"<<endl;
  }
  if (n%7 == 0) {
    cout<<n<<" Merupakan kelipatan 7"<<endl;
  }
  if (n%2 !=0 && n%3 !=0 && n%5 != 0 && n%7 != 0) {
    cout<<n<<"Bukan merupakan kelipatan 2,3,5,7"<<endl;
  }
}

