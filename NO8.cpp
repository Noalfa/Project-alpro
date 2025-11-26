#include <iostream>
using namespace std;

string tim[13];

void inputTim(){
    cout << "Input Nama Tim:"<<endl;
    for(int i = 0; i < 13; i++){
        cout << "Masukkan nama tim ke-" << i + 1 << ": ";getline(cin, tim[i]);
    }
    cout << endl;
}


void daftarTim(){
	for(int i = 0; i < 13; i++){
		cout << (i + 1) << ". " << tim[i] << endl;
	}
	cout << endl;
}


int main() {
    int pilihan;

    do {
        cout << "=== MENU PENGELOLAAN DATA TIM PIALA DUNIA ==="<<endl;
        cout << "1. Input Data Tim"<<endl;
        cout << "2. Tampilkan Data Tim"<<endl;
        cout << "3. Keluar"<<endl;
        cout << "Pilih menu (1-3): ";cin >> pilihan;
        cin.ignore();
        switch(pilihan){
			case 1:
				inputTim();
				break;
			case 2:
				daftarTim();
				break;
			case 3:
				cout << "Keluar dari program."<<endl;
				exit(0);
				break;
			default:
				cout << "Pilihan tidak valid, silakan coba lagi."<<endl;
		}
    } while (pilihan != 3);
}
