#include <iostream>
using namespace std;


const char* Notasi(int id){
	if(id == 3 || id == 11 || id == 7){
		return "Primer";
	}else if(id == 1 || id == 9 || id == 5){
		return "Sekunder";
	}else {
		return "Tersier";
	}
}

const char* Sifat(int id){
	if(id >= 1 && id <= 6){
		return "Hangat";
	}else {
		return "Dingin";
	}
}

void Perpaduan(int id, int pilih){
	int kiri, kanan, kiri2, kanan2, warna2, warna3, warna4;
	switch (id) {
        case 'a':
			kiri = pilih - 1;
			if(kiri == 0) kiri = 12;
			kiri2 = pilih - 2;
			if(kiri2 <= 0) kiri2 = 12 - pilih;
			kanan = pilih + 1;
			if(kanan == 13) kanan = 1;
			kanan2 = pilih + 2;
			if(kanan2 >= 13) kanan2 = pilih - kanan2;
			cout << "Perpaduan Warna Analogous dengan warna nomor:"<<endl;
			cout << kanan <<","<< kanan2 << " atau " << kiri2 << "," << kiri << " atau "<< kanan << "," << kiri;
            break;
        case 'b':
			warna2 = pilih + 6;
			if(warna2 > 12) warna2 -= 12;
			cout << "Perpaduan Warna Complementary dengan warna nomor:" << endl;
			cout << pilih << " dan " << warna2 << endl;
            break;
        case 'c':
			warna2 = pilih + 6;
			if(warna2 > 12) warna2 -= 12;
			kiri = warna2 - 1;
			if(kiri == 0) kiri = 12;
			kanan = warna2 + 1;
			if(kanan == 13) kanan = 1;
			cout << "Perpaduan Warna Split-Complementary dengan warna nomor:" << endl;
			cout << pilih << ", " << kiri << " dan " << kanan << endl;
            break;
        case 'd':
			warna2 = pilih + 4;
			if(warna2 > 12) warna2 -= 12;
			warna3 = pilih + 8;
			if(warna3 > 12) warna3 -= 12;
			cout << "Perpaduan Warna Triadic-Complementary dengan warna nomor:" << endl;
			cout << pilih << ", " << warna2 << " dan " << warna3 << endl;
            break;
        case 'e': 
			warna2 = pilih + 6;
			if(warna2 > 12) warna2 -= 12;
			warna3 = pilih + 3;
			if(warna3 > 12) warna3 -= 12;
			warna4 = pilih + 9;
			if(warna4 > 12) warna4 -= 12;
			cout << "Perpaduan Warna Tetradic (Rectangle) dengan warna nomor:" << endl;
			cout << pilih << ", " << warna3 << ", " << warna2 << ", " << warna4 << endl;
            break;
    }
}

int main(){
	int pilih; 
	char harmonis;
	cout << "Program Menentukan Notasi, Sifat Warna, dan Perpaduan Warna Harmonis"<<endl;
	cout << "Warna-Warna : "<<endl;
	cout << "1. Orange           2. Red-Orange    3. Red" << endl;
	cout << "4. Red-Violet       5. Violet        6. Blue-Violet" << endl;
	cout << "7. Blue             8. Blue-Green    9. Green" << endl;
	cout << "10. Yellow-Green   11. Yellow       12. Yellow Orange" << endl;
	cout << endl;
	cout << "Pilihan Warna : ";cin >> pilih;
	if (pilih > 12 || pilih < 1) {
        cout << "Input tidak valid. Keluar. (Harus 1 sampai 12)";
        return 0;
    }
    
    cout << "\nWarna terpilih: "<<endl;
    cout << "Notasi Warna : " << Notasi(pilih)  << endl;
    cout << "Sifat Warna  : " << Sifat(pilih) << endl;

    cout << "Pilih jenis perpaduan harmonis (masukkan angka):"<<endl;
    cout << "a. Perpaduan Warna Analogous "<<endl;
    cout << "b. Perpaduan Warna Complementary"<<endl;
    cout << "c. Perpaduan Warna Split-Complementary"<<endl;
    cout << "d. Perpaduan Warna Triadic-Complementary"<<endl;
    cout << "e. Perpaduan Warna Tetradic (Rectangle)"<<endl;
    cout << "Pilihan : ";cin >> harmonis;
    if (harmonis > 'e' || harmonis < 'a') {
        cout << "Input tidak valid. Keluar. (Harus 1 sampai 5)";
        return 0;
    }
    
    Perpaduan(harmonis, pilih);
}
