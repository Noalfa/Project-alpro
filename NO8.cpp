#include <iostream>
using namespace std;

string tim[13];
string bagi[4][4];
string benua[13];
string pemenangs[4];
int grup[4] = {3, 3, 3, 4};
int banyaktim = 0;
bool ada = false;
bool grups = false;

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
        cout << "Masukkan benua tim " << i + 1 << ": ";getline(cin, benua[i]);
    }
    for(int i = n; i < 13; i++) {
		tim[i] = "";
		benua[i] = "";
	}
    banyaktim = n;
    ada = (banyaktim > 0);
    cout << endl;
}


void daftarTim(){
	if(!ada){
		cout << "Belum ada data tim."<< endl;
		return;
	}
	string sudahTampil[20]; // simpan benua yang sudah tampil
    int countSudahTampil = 0;

    for(int i = 0; i < banyaktim; i++){
        string b = benua[i];

        // cek apakah b sudah pernah tampil
        bool pernah = false;
        for(int j = 0; j < countSudahTampil; j++){
            if(sudahTampil[j] == b){
                pernah = true;
                break;
            }
        }
        if(!pernah){
            sudahTampil[countSudahTampil++] = b;

            cout << "\n" << b << "\n";

            int nomor = 1;
            for(int k = 0; k < banyaktim; k++){
                if(benua[k] == b){
                    cout << nomor++ << ". " << tim[k] << "\n";
                }
            }
        }
	}
	cout << endl;
}


void bagiTim(){
	if(!ada){
		cout << "Belum ada data tim. Silahkan input data tim"<< endl;
		return;
	}
	for(int g = 0; g < 4; g++){
        for(int s = 0; s < 4; s++){
            bagi[g][s] = "";
        }
    }
    	
	int id = 0;
	for(int t = 0; t < 4; t++){
		bagi[3][t] = tim[id++];
	}
    
	for(int g = 0; g < 3; g++){
		for(int t = 0; t < 3; t++){
			bagi[g][t] = tim[id++];
		}
	}
	grups = true;
   
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
    cin.ignore();
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


void pemenang(){
    if(!grup){
        cout << "Grup belum dibagi. Silahkan bagi grup dulu (menu 3).\n";
        return;
    }

    for(int g = 0; g < 4; g++){
        cout << "\n--- Menentukan pemenang Grup " << char('A' + g) << " ---\n";
        // tampilkan anggota grup g dengan nomor
        int count = 0;
        for(int t = 0; t < grup[g]; t++){
            if(!bagi[g][t].empty()){
                count++;
                cout << count << ". " << bagi[g][t] << "\n";
            }
        }
        if(count == 0){
            cout << "Tidak ada anggota di grup ini.\n";
            pemenangs[g] = "";
            continue;
        }

        cout << "Pilih nomor pemenang untuk Grup " << char('A' + g) << " (0 = lewati): ";
        int pilih;
        cin >> pilih;
        cin.ignore();
        if(pilih <= 0 || pilih > count){
            cout << "Dilewati / nomor tidak valid, pemenang tidak diubah untuk grup ini.\n";
            // biarkan winners[g] tetap (mungkin kosong atau sebelumnya sudah di-set)
            continue;
        }

        // map pilihan (1..count) ke slot yang sesuai
        int nomor = 0;
        string terpilih = "";
        for(int t = 0; t < grup[g]; t++){
            if(!bagi[g][t].empty()){
                nomor++;
                if(nomor == pilih){
                    terpilih = bagi[g][t];
                    break;
                }
            }
        }
        pemenangs[g] = terpilih;
        cout << "Pemenang Grup " << char('A' + g) << " diset: " << pemenangs[g] << "\n";
    }
    cout << "\n=== PEMENANG TIAP GRUP ===\n";
    for(int g = 0; g < 4; g++){
        cout << "Grup " << char('A' + g) << ": ";
        if(!pemenangs[g].empty()) cout << pemenangs[g] << "\n";
        else cout << "(belum di-set)\n";
    }
    cout << endl;
}

int main() {
    int pilihan;

    do {
        cout << "=== MENU PENGELOLAAN DATA TIM PIALA DUNIA ==="<<endl;
        cout << "1. Input Data Tim"<<endl;
        cout << "2. Tampilkan Data Tim"<<endl;
        cout << "3. Bagi Otomatis (A=4, B=3, C=3, D=3)"<<endl;
        cout << "4. Ubah Data Tim"<<endl;
		cout << "5. Pilih Pemenang Tiap Grup"<<endl;
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
			case 5:
				pemenang();
				break;
			default:
				cout << "Pilihan tidak valid, silakan coba lagi."<<endl;
		}
    } while (pilihan != 6);
}
