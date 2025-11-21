#include <iostream>
using namespace std;

int main(){
	int a,b;
	cout << "Masukkan Jumlah Baris Matrik : ";cin >> a;
	cout << "Masukkan Jumlah Kolom Matrik : ";cin >> b;
	int matrik[a][b];
	cout << "Masukkan nilai Matriks"<<endl;
	for (int i=0;i < a; i++){
		for (int j=0; j<b; j++){
			cout <<"["<< i << "] " <<"["<< j<< "] = ";cin >> matrik[i][j];
		}
	}
	cout << endl;
	cout << "Tampilan Matriks"<<endl;
	for (int k = 0; k< a; k++){
		cout << " " << endl;
		for (int l = 0; l< b;l++){
			cout << "| " << matrik[k][l] <<" |";

			cout<<"Kontol"<<endl;
		}
	}
}
