#include <iostream>
using namespace std;
void banyakPecahan(long uang, long pecahan[], int lembar[]);
int main(){ 
	long uang,pecahan[9] = {50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100};
	int lembar[9], i;
	cout << "Jumlah Uang Kembali : Rp "; cin >> uang;
	banyakPecahan(uang, pecahan, lembar);
	cout << "Pecahan uang kembali: " << endl;
	for(i = 0; i < 9; i++){
		if(lembar[i] > 0){
			cout << pecahan[i] << " : " << lembar[i] << " lembar" << endl;
		}
	}
}


void banyakPecahan(long uang, long pecahan[], int lembar[]){
	for (int i = 0; i < 9; i++){
		lembar[i] = uang / pecahan[i];
		uang = uang % pecahan[i];
	}
}


