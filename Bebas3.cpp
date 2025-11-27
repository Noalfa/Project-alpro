#include <iostream>
using namespace std;

void penjumlahan(float a, float b) {
  double hasil = a+b;
  cout << "Hasil penjumlahan: " <<hasil<< endl;
}

void pengurangan(float a, float b) {
  double hasil = a-b;
  cout << "Hasil pengurangan: " <<hasil<< endl;
}

void perkalian(float a, float b) {
  double hasil = a*b;
  cout << "Hasil perkalian: " <<hasil<< endl;
}

void pembagian(float a, float b) {
    if (b != 0) {
      double hasil = a/b;
        cout << "Hasil pembagian: " <<hasil<< endl;
    } else {
        cout << "Error: pembagian dengan nol tidak diperbolehkan." << endl;
    }
}

int main () {
    float x, y;
    char ulang;
    int pilih;

    do {
		system ("cls");
        cout << "=== Kalkulator Sederhana ===" << endl;
        cout << "1. Penjumlahan" << endl;
        cout << "2. Pengurangan" << endl;
        cout << "3. Perkalian" << endl;
        cout << "4. Pembagian" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilih menu: ";
        cin >> pilih;
		
		if (pilih==5){
			cout<<"Keluar dari program..."<<endl;
			exit(0);
			}
		
        cout << "Masukkan angka pertama: "; cin >> x;
        cout << "Masukkan angka kedua: "; cin >> y;

        switch (pilih) {
          case 1:
            penjumlahan(x, y);
            break;
          case 2:
            pengurangan(x, y);
            break;
          case 3:
            perkalian(x, y);
            break;
          case 4:
            pembagian(x, y);
            break;
          default:
            cout << "Pilihan menu tidak tersedia." << endl;
        }
        cout << "Ingin mengulang? (y/n): "; cin >> ulang;
    } 
    while (ulang == 'y' || ulang == 'Y');
}
