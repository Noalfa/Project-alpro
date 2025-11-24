#include <iostream>
using namespace std;

string satuan(int n){
	string angka[10] = {"", "satu", "dua", "tiga", "empat", "lima",
                        "enam", "tujuh", "delapan", "sembilan"};
    return angka[n];
}
int main(){
	int bilangan, sisa, puluhan;
	char ulangi;
	do{
		cout << "Masukkan angka (1-99) = ";cin >> bilangan;
		if (bilangan < 1 || bilangan > 99) {
			cout << "Bilangan di luar jangkauan (harus 1-99)" << endl;
			return 0;
		}
		puluhan = bilangan / 10;
		sisa = bilangan % 10;
		
		cout << "Terbilang : ";
		if (bilangan < 10) {
        // angka 1-9
        cout << satuan(bilangan);
		}
		else if (bilangan == 10) {
			cout << "sepuluh";
		}
		else if (bilangan == 11) {
			cout << "sebelas";
		}
		else if (bilangan < 20) {  // 12-19
			cout << satuan(sisa) << " belas";
		}
		else { // 20-99
			cout << satuan(puluhan) << " puluh";
			if (sisa != 0)
				cout << " " << satuan(sisa);
		}
		cout << endl;
		cout << "Ulangi (y/t)? ";cin >> ulangi;
		cout << endl;
	} while (ulangi == 'y' || ulangi == 'Y');
	return 0;
}

