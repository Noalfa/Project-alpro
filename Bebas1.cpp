#include <iostream>
using namespace std;

void kelvin(int &c) {
    double k = c + 273.15;
    cout<<"Kelvin = "<<k<<" K"<<endl;
}

void reamur(int &c) {
    double r = (4.0 / 5.0) * c;
    cout<<"Reamur = "<<r<<" R"<<endl;
}

void fahrenheit(int &c) {
    double f = (9.0 / 5.0) * c + 32;
    cout<<"Fahrenheit = "<<f<<" F"<<endl;
}

int main() {
	while (true) {
    int pilih, c = 0;
    
    cout << "Masukkan suhu dalam celcius: "; cin >> c;
    cout << endl;

    cout << "Menu Konversi Suhu" << endl;
    cout << "1. Fahrenheit " << endl;
    cout << "2. Reamur" << endl;
    cout << "3. Kelvin" << endl;
    cout << "Suhu Celcius akan dikonversi ke suhu (1-3): ";
    cin >> pilih;

    cout << endl;

    switch (pilih) {
        case 1:
            fahrenheit(c);
            break;

        case 2:
            reamur(c);
            break;

        case 3:
            kelvin(c);
            break;

        default:
            cout << "Pilihan tidak valid." << endl;
            break;
		}
		cout<<endl;
	}
}
