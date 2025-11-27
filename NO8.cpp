#include <iostream>
using namespace std;

string tim[13];
string bagi[4][4];
int grup[4] = {4, 3, 3, 3};
int banyaktim = 0;
bool ada = false;

void inputTim(){
	int n;
    cout << "Berapa jumlah tim yang akan diinput (maks 13)? ";cin >> n;
    cin.ignore();
    if(n < 1 || n > 13){
		cout << "Minimal 1 tim dan maksimal 13 tim"<<endl;
		return;
	}
    for(int i = 0; i < n; i++){
        cout << "Masukkan nama tim ke-" << i + 1 << ": ";getline(cin, tim[i]);
    }
    for(int i = n; i < 13; i++) tim[i] = "";
    banyaktim = n;
    ada = (banyaktim > 0);
    cout << endl;
}


void daftarTim(){
	if(!ada){
		cout << "Belum ada data tim. Silahkan input data tim"<< endl;
		return;
	}else{
		cout << endl;
		for(int i = 0; i < 13; i++){
			cout << (i + 1) << ". " << tim[i] << endl;
		}
	}
	cout << endl;
}


void bagiTim(){
	if(!ada){
		cout << "Belum ada data tim. Silahkan input data tim"<< endl;
		return;
	}else{
		int id = 0;
		for(int t = 0; t < 4; t++){
			bagi[0][t] = tim[id++];
		}
    
		for(int g = 1; g < 4; g++){
			for(int t = 0; t < 3; t++){
				bagi[g][t] = tim[id++];
			}
		}
    
		cout << "=== HASIL PEMBAGIAN GRUP ===\n";
		for(int g = 0; g < 4; g++){
			cout << "Grup " << char('A' + g) << " (" << grup[g] << " tim): ";
			for(int t = 0; t < grup[g]; t++){
				cout << bagi[g][t];
				if(t < grup[g] - 1) cout << ", ";
			}	
			cout << endl;
		}
	}
	cout << endl;
}

void ubahData(){
	int pilih, id;
	string namaBaru;
	if(!ada){
		cout << "Belum ada data tim. Silahkan input data tim"<< endl;
		return;
	}
	daftarTim();
	cout << "Pilih nomor tim yang ingin diubah/hapus: ";cin >> id;
	cin.ignore();
    if(id < 1 || id > banyaktim){
        cout << "Nomor tim tidak valid.\n\n";
        return;
    }
    cout << "1. Ubah nama tim"<< endl;
    cout << "2. Hapus tim"<< endl;
    cout << "Pilih (1-2): ";cin >> pilih;
    if(pilih == 1){
        cout << "Masukkan nama baru untuk tim ke-" << id << ": ";getline(cin, namaBaru);
        tim[id - 1] = namaBaru;
        cout << "Nama tim berhasil diubah.\n\n";
    } else if(pilih == 2){
        for(int i = id - 1; i < banyaktim - 1; i++){
            tim[i] = tim[i + 1];
        }
        tim[banyaktim - 1] = "";
        banyaktim--;
        if(banyaktim == 0) ada = false;
        cout << "Tim berhasil dihapus.\n\n";
    } else {
        cout << "Aksi tidak valid.\n\n";
    }
}

int main() {
    int pilihan;

    do {
        cout << "=== MENU PENGELOLAAN DATA TIM PIALA DUNIA ==="<<endl;
        cout << "1. Input Data Tim"<<endl;
        cout << "2. Tampilkan Data Tim"<<endl;
        cout << "3. Bagi Otomatis (A=4, B=3, C=3, D=3)"<<endl;
        cout << "4. Ubah Data Tim"<<endl;
        cout << "Pilih menu (1-5): ";cin >> pilihan;
        cin.ignore();
        switch(pilihan){
			case 1:
				inputTim();
				break;
			case 2:
				daftarTim();
				break;
			case 3:
				bagiTim();
				break;
			case 4:
				ubahData();
				break;	
			default:
				cout << "Pilihan tidak valid, silakan coba lagi."<<endl;
		}
    } while (pilihan != 3);
}
