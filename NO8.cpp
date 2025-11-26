#include <iostream>
using namespace std;

string tim[13];
void inputTim(){
    cout << "Input Nama Tim:"<<endl;
    for(int i = 0; i < 13; i++){
        cout << "Masukkan nama tim ke-" << (i + 1) << ": ";getline(cin, timPeserta[i]);
    }
}

int main() {
    int pilihan;

    do {
        cout << "=== MENU PENGELOLAAN DATA TIM PIALA DUNIA ==="<<endl;
        cout << "1. Input Data Tim"<<endl;
        cout << "2. Tampilkan Data Tim"<<endl;
        cout << "3. Keluar"<<endl;
        cout << "Pilih menu (1-3): ";cin >> pilihan;
      
        if (pilihan == 1) {
            inputTim();
        } else if (pilihan == 2) {
  
        } else if (pilihan == 3) {
            cout << "Keluar dari program."<<endl;
        } else {
            cout << "Pilihan tidak valid, silakan coba lagi."<<endl;
        }
    } while (pilihan != 3);
}
