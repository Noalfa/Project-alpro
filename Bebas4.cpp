#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Masukkan bilangan: "; cin >> n;
    bool prima = true;

    if (n <= 1) {
        prima = false;          
    } 
    else {
        for (int i = 2; i <= n/2; i++) {
            if (n % i == 0) {    
                prima = false;
                break;
            }
        }
    }

    if (prima)
        cout << n << "
         adalah bilangan prima."<<endl;
    else
        cout << n << " bukan bilangan prima."<<endl;

    return 0;
}
