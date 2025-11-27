#include <iostream>
using namespace std;

double hitungRataRata();
void cekLulus(double na);
char getIndeks(double nilai);
void menu ();

int main () {
	menu();
	}

void menu () {
	int pilih;
	char ulang;
	do {
	system("cls");
	cout<<"Program Sistem Analisis Nilai Sederhana"<<endl;
	cout<<"1. Hitung Rata-rata dari 'N' Nilai "<<endl;
	cout<<"2. Cek Status Kelulusan "<<endl;
	cout<<"3. Tampilkan Indeks Nilai "<<endl;
	cout<<"4. Keluar"<<endl;
	cout<<"Pilih menu : "; cin>>pilih;
	
	switch (pilih) {
		case 1:{
			double rata = hitungRataRata ();
			cout<<"Rata-rata nilai anda adalah: "<<rata<<endl;  
			break;
			}
		case 2: {
			double na;
			cout<<"Masukkan nilai akhir (0-100): ";cin>>na; 
			cekLulus(na); 
			break;
			}
		case 3: {
			double in;
			cout<<"Masukkan nilai akhir (0-100): ";cin>>in;
			char indeks = getIndeks(in);
			
			if (indeks == 0) {
				cout<<"Nilai tidak valid"<<endl;
				}
				else {
					cout<<"Indeks nilai anda "<<indeks<<endl;
					}
			break;
			}
		case 4: {
			cout<<"Terimakasih sudah menggunakan program ini" <<endl;
			return;
			}
		default:	
			cout<<"Pilihan tidak valid"<<endl;
			}
			cout<<"Ulangi? (y/n) : "; cin>>ulang;
			cout<<endl;
		}
		while(ulang == 'y' || ulang == 'Y');
	}

double hitungRataRata() {
	int n;
	cout<<"Banyak nilai data yang ingin dimaksukkan: "; cin>>n;
	
	if (n <= 0) {
        cout << "Jumlah data harus lebih dari 0" << endl;
        return 0;
    }
    
	double nilai, total = 0;
	for (int i = 1; i <= n; i++){
		cout<<"Masukkan nilai ke- "<<i<<": "; cin>>nilai;
		total += nilai;
			}
		double rata2 = total/n;
		return rata2;
		}

void cekLulus(double na) {
	int kkm = 70;
	if (na>=0 && na<= 100){
	if (na>=kkm){
		cout<<"Lulus"<<endl;
		}
		else {
			cout<<"Tidak lulus"<<endl;
			}
		}
	else {
		cout<<"Nilai yang diinput tidak valid"<<endl;
		}
	}
	
char getIndeks(double nilai) {
	if (nilai >= 85 && nilai <= 100)
        return 'A';
    else if (nilai >= 75 && nilai < 85)
        return 'B';
    else if (nilai >= 60 && nilai < 75)
        return 'C';
    else if (nilai >= 40 && nilai < 60)
        return 'D';
    else if (nilai >= 0 && nilai < 40)
        return 'E';
    else {
		return 0;
		}
	}
