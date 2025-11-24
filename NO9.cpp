#include <iostream>
using namespace std;

void persegi () {
  double sisi = 0;
  cout<<"Masukkan nilai sisi: "; cin>>sisi;
  if (sisi >0){
    double luas = sisi*sisi;
    cout<<"Luas Persegi = "<<luas<<endl;
  }
  else {
    cout<<"nilai yang dimasukkan tidak boleh kurang dari 1"<<endl;
  }
}

void persegipanjang () {
  double panjang = 0, lebar = 0;
  cout<<"Masukkan nilai panjang: "; cin>>panjang;
  cout<<"Masukkan nilai lebar: "; cin>>lebar;
  if (panjang >0 && lebar >0){
    double luas = panjang*lebar;
    cout<<"Luas Persegi Panjang = "<<luas<<endl;
  }
  else {
    cout<<"nilai yang dimasukkan tidak boleh kurang dari 1"<<endl;
  }
}

void segitiga () {
  double alas = 0, tinggi = 0;
  cout<<"Masukkan nilai alas segitiga: "; cin>>alas;
  cout<<"Masukkan nilai tinggi segitiga: "; cin>>tinggi;
  if (alas >0 && tinggi >0){
    double luas = 0.5*alas*tinggi;
    cout<<"Luas Segitiga = "<<luas<<endl;
  }
  else {
    cout<<"nilai yang dimasukkan tidak boleh kurang dari 1"<<endl;
  }
}

void lingkaran () {
  double jari2 = 0;
  cout<<"Masukkan nilai jari-jari: "; cin>>jari2;
  if (jari2 >0){
    double luas = 3.14*jari2*jari2;
    cout<<"Luas Lingkaran = "<<luas<<endl;
  }
  else {
    cout<<"nilai yang dimasukkan tidak boleh kurang dari 1"<<endl;
  }
}

void jajar () {
  double alas = 0, tinggi = 0;
  cout<<"Masukkan nilai alas jajar genjang: "; cin>>alas;
  cout<<"Masukkan nilai tinggi jajar genjang: "; cin>>tinggi;
  if (alas >0 && tinggi >0){
    double luas = alas*tinggi;
    cout<<"Luas Jajar Genjang = "<<luas<<endl;
  }
  else {
    cout<<"nilai yang dimasukkan tidak boleh kurang dari 1"<<endl;
  }
}

void belah () {
  double d1 = 0, d2 = 0;
  cout<<"Masukkan nilai diagonal 1: "; cin>>d1;
  cout<<"Masukkan nilai diagonal 2: "; cin>>d2;
  if (d1 >0 && d2 >0){
    double luas = 0.5*d1*d2;
    cout<<"Luas Belah Ketupat = "<<luas<<endl;
  }
  else {
    cout<<"nilai yang dimasukkan tidak boleh kurang dari 1"<<endl;
  }
}

void layang2 () {
  double d1 = 0, d2 = 0;
  cout<<"Masukkan nilai diagonal 1: "; cin>>d1;
  cout<<"Masukkan nilai diagonal 2: "; cin>>d2;
  if (d1 >0 && d2 >0){
    double luas = 0.5*d1*d2;
    cout<<"Luas Layang-layang = "<<luas<<endl;
  }
  else {
    cout<<"nilai yang dimasukkan tidak boleh kurang dari 1"<<endl;
  }
}

void trapesium () {
  double a1 = 0, a2 = 0, tinggi = 0;
  cout<<"Masukkan nilai sisi sejajar 1 trapesium: "; cin>>a1;
  cout<<"Masukkan nilai sisi sejajar 2 trapesium: "; cin>>a2;
  cout<<"Masukkan nilai tinggi trapesium: "; cin>>tinggi;
  if (a1 >0 && a2 >0 && tinggi >0){
    double luas = 0.5*(a1+a2)*tinggi;
    cout<<"Luas Trapesium = "<<luas<<endl;
  }
  else {
    cout<<"nilai yang dimasukkan tidak boleh kurang dari 1"<<endl;
  }
}

void kubus () {
 double sisi = 0;
  cout<<"Masukkan nilai sisi kubus: "; cin>>sisi;
  if (sisi >0){
    double volume = sisi*sisi*sisi;
    cout<<"Volume Kubus = "<<volume<<endl;
  }
  else {
    cout<<"nilai yang dimasukkan tidak boleh kurang dari 1"<<endl;
  }
}

void balok () {
 double panjang = 0, lebar = 0, tinggi = 0;
  cout<<"Masukkan nilai panjang kubus: "; cin>>panjang;
  cout<<"Masukkan nilai lebar kubus: "; cin>>lebar;
  cout<<"Masukkan nilai tinggi kubus: "; cin>>tinggi;
  if (panjang >0 && lebar >0 && tinggi >0){
    double volume = panjang*lebar*tinggi;
    cout<<"Volume Balok = "<<volume<<endl;
  }
  else {
    cout<<"nilai yang dimasukkan tidak boleh kurang dari 1"<<endl;
  }
}

void tabung () {
 double jari2 = 0, tinggi = 0;
  cout<<"Masukkan nilai jari-jari tabung: "; cin>>jari2;
  cout<<"Masukkan nilai tinggi kubus: "; cin>>tinggi;
  if (jari2 >0 && tinggi >0){
    double volume = 3.14*jari2*jari2*tinggi;
    cout<<"Volume Tabung = "<<volume<<endl;
  }
  else {
    cout<<"nilai yang dimasukkan tidak boleh kurang dari 1"<<endl;
  }
}

void bola () {
 double jari2 = 0;
  cout<<"Masukkan nilai jari-jari bola: "; cin>>jari2;
  if (jari2 >0){
    double volume = 4.0/3.0*3.14*jari2*jari2*jari2;
    cout<<"Volume Bola = "<<volume<<endl;
  }
  else {
    cout<<"nilai yang dimasukkan tidak boleh kurang dari 1"<<endl;
  }
}

void kerucut () {
  double jari2 = 0, tinggi = 0;
  cout<<"Masukkan nilai jari-jari kerucut: "; cin>>jari2;
  cout<<"Masukkan nilai tinggi kerucut: "; cin>>tinggi;
  if (jari2 >0 && tinggi >0){
    double volume = (3.14*jari2*jari2*tinggi)/3;
    cout<<"Volume Kerucut = "<<volume<<endl;
  }
  else {
    cout<<"nilai yang dimasukkan tidak boleh kurang dari 1"<<endl;
  }
}

void limas3 () {
  char tau;
  double alas = 0.0, tinggi = 0.0, luas = 0.0, tinggi2 = 0.0, volume = 0.0;
  cout<<"Apakah sudah mengetahui luas alas (y/n)? "; cin>>tau;
  if (tau == 'y' || tau == 'Y') {
    cout<<"Masukkan luas alas (segitiga): "; cin>>luas;
    cout<<"Masukkan tinggi limas: "; cin>>tinggi2;
    if(luas>0 && tinggi2>0){
    volume = (luas*tinggi2)/3.0;
    cout<<"Volume Limas Segitiga: "<<volume<<endl;
    }
    else {
      cout<<"nilai yang dimasukkan tidak boleh kurang dari 1"<<endl;
    }
  }
  else if (tau == 'n' || tau == 'N'){
    cout<<"Masukkan alas segitiga: "; cin>>alas;
    cout<<"Masukkan tinggi segitiga: "; cin>>tinggi;
    cout<<"Masukkan tinggi limas: "; cin>>tinggi2;
    if (alas>0 && tinggi>0 && tinggi2>0) {
      volume = ((alas*tinggi*0.5)*tinggi2)/3.0;
      cout<<"Volume Limas Segitiga: "<<volume<<endl;
    }
    else {
      cout<<"nilai yang dimasukkan tidak boleh kurang dari 1"<<endl;
    }
  }
  else {
    cout<<"Input yang dimasukkan tidak valid"<<endl;
    return;
  }
}

void limas4 () {
  char tau;
  int bangun;
  double sisi = 0.0, panjang = 0.0, lebar = 0.0, luas = 0.0, tinggi = 0.0, volume = 0.0;
  cout<<"Apakah sudah mengetahui luas alas (y/n)? "; cin>>tau;
  if (tau == 'y' || tau == 'Y') {
    cout<<"Masukkan luas alas: "; cin>>luas;
    cout<<"Masukkan tinggi limas: "; cin>>tinggi;
    if(luas>0 && tinggi>0){
    volume = (luas*tinggi)/3.0;
    cout<<"Volume Limas Segiempat: "<<volume<<endl;
    }
    else {
      cout<<"nilai yang dimasukkan tidak boleh kurang dari 1"<<endl;
    }
  }
  else if (tau == 'n' || tau == 'N'){
    cout<<"Apakah alas persegi [1] atau persegi panjang [2]: ?"; cin>>bangun;
    if (bangun == 1) {
    cout<<"Masukkan panjang sisi persegi: "; cin>>sisi;
    cout<<"Masukkan tinggi limas: "; cin>>tinggi;
      if (sisi>0 && tinggi>0 ) {
        volume = (sisi*sisi*tinggi)/3.0;
        cout<<"Volume Limas Segiempat: "<<volume<<endl;
      }
      else {
        cout<<"nilai yang dimasukkan tidak boleh kurang dari 1"<<endl;
      }
    }
    else if (bangun ==2){
      cout<<"Masukkan sisi panjang: "; cin>>panjang;
      cout<<"Masukkan sisi lebar: "; cin>>lebar;
      cout<<"Masukkan tinggi limas: "; cin>>tinggi;
      if (panjang>0 && lebar>0 && tinggi>0 ) {
        volume = (panjang*lebar*tinggi)/3.0;
        cout<<"Volume Limas Segiempat: "<<volume<<endl;
      }
      else {
        cout<<"nilai yang dimasukkan tidak boleh kurang dari 1"<<endl;
      }
    }
    else {
      cout<<"Input yang dimasukkan tidak valid"<<endl;
		}
    }
  else {
    cout<<"Input yang dimasukkan tidak valid"<<endl;
    return;
  }
}

void prisma3 () {
  char tau;
  double alas = 0.0, tinggi = 0.0, luas = 0.0, tinggi2 = 0.0, volume = 0.0;
  cout<<"Apakah sudah mengetahui luas alas (y/n)? "; cin>>tau;
  if (tau == 'y' || tau == 'Y') {
    cout<<"Masukkan luas alas (segitiga): "; cin>>luas;
    cout<<"Masukkan tinggi prisma: "; cin>>tinggi2;
    if(luas>0 && tinggi2>0){
    volume = luas*tinggi2;
    cout<<"Volume Prisma Segitiga: "<<volume<<endl;
    }
    else {
      cout<<"nilai yang dimasukkan tidak boleh kurang dari 1"<<endl;
    }
  }
  else if (tau == 'n' || tau == 'N'){
    cout<<"Masukkan alas segitiga: "; cin>>alas;
    cout<<"Masukkan tinggi segitiga: "; cin>>tinggi;
    cout<<"Masukkan tinggi prisma: "; cin>>tinggi2;
    if (alas>0 && tinggi>0 && tinggi2>0) {
      volume = (alas*tinggi*0.5)*tinggi2;
      cout<<"Volume Prisma Segitiga: "<<volume<<endl;
    }
    else {
      cout<<"nilai yang dimasukkan tidak boleh kurang dari 1"<<endl;
    }
  }
  else {
    cout<<"Input yang dimasukkan tidak valid"<<endl;
    return;
  }
}

void datar () {
  int pilih;
  cout<<endl;
  cout<<"Menghitung Luas Bangun datar "<<endl;
  cout<<"1. Persegi" <<endl;
  cout<<"2. Persegi panjang" <<endl;
  cout<<"3. Segitiga" <<endl;
  cout<<"4. Lingkaran" <<endl;
  cout<<"5. Jajar Genjang" <<endl;
  cout<<"6. Belah Ketupat" <<endl;
  cout<<"7. Layang-layang" <<endl;
  cout<<"8. Trapesium" <<endl;
  cout<<"Pilih Jenis Bangun Datar: "; cin>>pilih;
    
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
    case 5:
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
  cout<<endl;
  cout<<"Menghitung Luas Bangun Ruang "<<endl;
  cout<<"1. Kubus" <<endl;
  cout<<"2. Balok" <<endl;
  cout<<"3. Tabung" <<endl;
  cout<<"4. Bola" <<endl;
  cout<<"5. Kerucut" <<endl;
  cout<<"6. Limas Segitiga" <<endl;
  cout<<"7. Limas Segiempat" <<endl;
  cout<<"8. Prisma Segitiga" <<endl;
  cout<<"Pilih Jenis Bangun Ruang: "; cin>>pilih;
    
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
    case 5:
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
  while (true) {
    cout<<"\nProgram Menghitung Luas Bangun Datar atau Volume Bangun Ruang"<<endl;
    cout<<"1. Bangun Datar"<<endl;
    cout<<"2. Bangun Ruang"<<endl;
    cout<<"0. Keluar"<<endl;
    cout<<"Pilihan: "; cin>>pilih;

    if (pilih == 1) {
      datar ();
    } else if (pilih == 2) {
      ruang ();
    } else if (pilih == 0) {
      cout<<"Terima kasih, program selesai."<<endl;
      exit(0);
    } else {
      cout<<"Pilihan tidak valid"<<endl;
    }
  }
  return 0;
}
