#include <iostream>
using namespace std;

int main() {
    int jumlah;
	int i = 0;
    cout << "Masukkan jumlah nilai mahasiswa: "; cin >> jumlah;
    int nilai[jumlah];

	while (i<jumlah) {
		cout<<"Nilai ke - "<<i+1<<" = "; cin>>nilai[i];
		i++;
	}

    int max = nilai[0];
	i = 1;
    while (i<jumlah){
		if (nilai[i] > max) {
			max = nilai[i];
		}
		i++;
	}
	int banyak = 0;
	i = 0;
	while (i<jumlah) {
		if(nilai[i] == max){
			banyak++;
		}
		i++;
	}

    cout<<"Nilai terbesar: " <<max<<endl;
	cout<<"Banyak mahasiswa memiliki nilai tertinggi = "<<banyak<<endl;
    
  }
