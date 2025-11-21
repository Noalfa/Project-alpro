#include <iostream>
using namespace std;

void datar () {
  int pilih;
  cout<<"Menghitung Luas Bangun datar "<<endl;
  cout<<"1. Persegi" <<endl;
  cout<<"2. Persegi panjang" <<endl;
  cout<<"3. Segitiga" <<endl;
  cout<<"4. Lingkaran" <<endl;
  cout<<"5. Jajar Genjang" <<endl;
  cout<<"6. Belah Ketupat" <<endl;
  cout<<"7. Layang-layang" <<endl;
  cout<<"8. Trapesium" <<endl;
  cout<<"Pilih Jenis Bangun Datar"; cin>>pilih;
    
  switch (pilih) {
    case 1:
      persegi();
      break;
    case 2:
      persegipanjang();
      break;
    case 3:
      segitiga();
      break;
    case 4: 
      lingkaran();
      break;
    case 5
      jajar();
      break;
    case 6:
      belah();
      break;
    case 7:
      layang2();
      break;
    case 8:
      trapesium();
      break;
    default:
      cout<<"Pilihan tidak valid"<<endl;
  }  
}
void ruang () {
  int pilih;
  cout<<"Menghitung Luas Bangun Ruang "<<endl;
  cout<<"1. Kubus" <<endl;
  cout<<"2. Balok" <<endl;
  cout<<"3. Tabung" <<endl;
  cout<<"4. Bola" <<endl;
  cout<<"5. Kerucut" <<endl;
  cout<<"6. Limas Segitiga" <<endl;
  cout<<"7. Limas Segiempat" <<endl;
  cout<<"8. Prisma Segitiga" <<endl;
  cout<<"Pilih Jenis Bangun Ruang"; cin>>pilih;
    
  switch (pilih) {
    case 1:
      kubus();
      break;
    case 2:
      balok();
      break;
    case 3:
      tabung();
      break;
    case 4: 
      bola();
      break;
    case 5
      kerucut();
      break;
    case 6:
      limas3();
      break;
    case 7:
      limas4();
      break;
    case 8:
      prisma3();
      break;
    default:
      cout<<"Pilihan tidak valid"<<endl;
  }  
}

int main () {
  int pilih;
  string nama
  cout<<"Program Menghitung Luas Bangun Datar atau Volume Bangun Ruang"<<endl;
  cout<<"Bangun Datar [1] / Bangun Ruang [2] : "; cin>>pilih;

  if (pilih == 1) {
    datar ();
  } else if (pilih == 2) {
    ruang ();
  } else {
    cout<<"Pilihan tidak valid"<<endl;
  }
}
