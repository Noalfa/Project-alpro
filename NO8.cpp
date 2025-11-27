#include <iostream>
using namespace std;

string tim[13];
string bagi[4][3];
int groupSize[4] = {4, 3, 3, 3};
bool sbagi = true;


void inputTim(){
    cout << "Input Nama Tim:"<<endl;
    for(int i = 0; i < 13; i++){
        cout << "Masukkan nama tim ke-" << i + 1 << ": ";getline(cin, tim[i]);
    }
    cout << endl;
}


void daftarTim(){
	cout << endl;
	for(int i = 0; i < 13; i++){
		cout << (i + 1) << ". " << tim[i] << endl;
	}
	cout << endl;
}


void bagiTim(){
	int idx = 0;
    // Grup A 4 tim
    for(int t = 0; t < 4; t++){
        bagi[0][t] = tim[idx++];
    }
    // Grup B, C, D masing-masing 3 tim
    for(int g = 1; g < 4; g++){
        for(int t = 0; t < 3; t++){
            bagi[g][t] = tim[idx++];
        }
    }
    
	cout << "=== HASIL PEMBAGIAN GRUP ===\n";
    for(int g = 0; g < 4; g++){
        cout << "Grup " << char('A' + g) << " (" << groupSize[g] << " tim): ";
        for(int t = 0; t < groupSize[g]; t++){
            cout << bagi[g][t];
            if(t < groupSize[g] - 1) cout << ", ";
        }
        cout << endl;
    }
    cout << endl;
    sbagi = true;
}


void pemenangGroup(){
	if(!sbagi){
		cout << "Belum ada pembagian grup."<<endl;
		return;
	}
	
}

int main() {
    int pilihan;

    do {
        cout << "=== MENU PENGELOLAAN DATA TIM PIALA DUNIA ==="<<endl;
        cout << "1. Input Data Tim"<<endl;
        cout << "2. Tampilkan Data Tim"<<endl;
        cout << "3. Bagi Otomatis (A=4, B=3, C=3, D=3)"<<endl;
        cout << "4. Pilih Pemenang Tiap Grup"<<endl;
        cout << "5. Pilih Juara 1-3" << endl;
        cout << "Pilih menu (1-5): ";cin >> pilihan;
        cin.ignore();
        switch(pilihan){
			case 1:
				inputTim();
				break;
			case 2:
				if(tim[0].empty()){
					cout << "Belum ada data tim. Silahkan input data tim"<< endl;
				}else{
					daftarTim();
				}
				break;
			case 3:
				bagiTim();
				break;
			case 4:
				pemenangGrup();
				break;	
			case 5:
				
				break;
			default:
				cout << "Pilihan tidak valid, silakan coba lagi."<<endl;
		}
    } while (pilihan != 3);
}
