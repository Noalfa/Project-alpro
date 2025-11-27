#include <iostream>
using namespace std;

double kelvin(int &c) {
    return c + 273.15;
}

double reamur(int &c) {
    return (4.0 / 5.0) * c;
}

double fahrenheit(int &c) {
    return (9.0 / 5.0) * c + 32;
}

int main() {
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
            cout << "Fahrenheit = " << fahrenheit(c) << " F" << endl;
            break;

        case 2:
            cout << "Reamur = " << reamur(c) << " R" << endl;
            break;

        case 3:
            cout << "Kelvin = " << kelvin(c) << " K" << endl;
            break;

        default:
            cout << "Pilihan tidak valid." << endl;
            break;
    }
}
