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

void persegi () {
  float sisi;
  cout<<"Masukkan nilai sisi: "; cin>>sisi;
  if (sisi >0){
    float luas = sisi*sisi;
    cout<<"Luas Persegi = "<<luas<<endl;
  }
  else {
    cout<<"nilai yang dimasukkan tidak boleh kurang dari 1"<<endl;
  }
}

void persegipanjang () {
  float panjang;
  double lebar;
  cout<<"Masukkan nilai panjang: "; cin>>panjang;
  cout<<"Masukkan nilai lebar: "; cin>>lebar;
  if (panjang >0 && lebar >0){
    float luas = panjang*lebar;
    cout<<"Luas Persegi Panjang = "<<luas<<endl;
  }
  else {
    cout<<"nilai yang dimasukkan tidak boleh kurang dari 1"<<endl;
  }
}

void segitga () {
  float alas;
  double tinggi;
  cout<<"Masukkan nilai alas segitiga: "; cin>>alas;
  cout<<"Masukkan nilai tinggi segitiga: "; cin>>tinggi;
  if (alas >0 && tinggi >0){
    float luas = 0.5*alas*tinggi;
    cout<<"Luas Persegi Panjang = "<<luas<<endl;
  }
  else {
    cout<<"nilai yang dimasukkan tidak boleh kurang dari 1"<<endl;
  }
}

void lingkaran () {
  double jari2;
  cout<<"Masukkan nilai jari-jari: "; cin>>jari2;
  if (jari2 >0){
    float luas = 3.14*(jari2^2)
    cout<<"Luas Lingkaran = "<<luas<<endl;
  }
  else {
    cout<<"nilai yang dimasukkan tidak boleh kurang dari 1"<<endl;
  }
}

void jajar () {
  float alas;
  double tinggi;
  cout<<"Masukkan nilai alas jajar genjang: "; cin>>alas;
  cout<<"Masukkan nilai tinggi jajar genjang: "; cin>>tinggi;
  if (alas >0 && tinggi >0){
    float luas = 0.5*alas*tinggi;
    cout<<"Luas Jajar Genjang = "<<luas<<endl;
  }
  else {
    cout<<"nilai yang dimasukkan tidak boleh kurang dari 1"<<endl;
  }
}

void belah () {
  float d1;
  double d2;
  cout<<"Masukkan nilai diagonal 1: "; cin>>d1;
  cout<<"Masukkan nilai diagonal 2: "; cin>>d2;
  if (alas >0 && tinggi >0){
    float luas = 0.5*d1*d2;
    cout<<"Luas Belah Ketupat = "<<luas<<endl;
  }
  else {
    cout<<"nilai yang dimasukkan tidak boleh kurang dari 1"<<endl;
  }
}

void layang2 () {
  float d1;
  double d2;
  cout<<"Masukkan nilai diagonal 1: "; cin>>d1;
  cout<<"Masukkan nilai diagonal 2: "; cin>>d2;
  if (alas >0 && tinggi >0){
    float luas = 0.5*d1*d2;
    cout<<"Luas Layang-layang = "<<luas<<endl;
  }
  else {
    cout<<"nilai yang dimasukkan tidak boleh kurang dari 1"<<endl;
  }
}

void trapesium () {
  float alas1, alas2;
  double tinggi;
  cout<<"Masukkan nilai alas 1 trapesium: "; cin>>alas1;
  cout<<"Masukkan nilai alas 2 trapesium: "; cin>>alas2;
  cout<<"Masukkan nilai tinggi trapesium: "; cin>>tinggi;
  if (alas1 >0 && alas2 >0 && tinggi >0){
    float luas = 0.5*(alas1+alas2)*tinggi;
    cout<<"Luas Trapesium = "<<luas<<endl;
  }
  else {
    cout<<"nilai yang dimasukkan tidak boleh kurang dari 1"<<endl;
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
