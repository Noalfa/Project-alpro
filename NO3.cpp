#include <iostream>
using namespace std;

int main(){
	int angka[10] = {2, 5, 1, 2, 4, 6, 3, 2, 7, 1};
	double jumlah = 0, nilai = 0;
	cout << "Data Awal : ";
	for (int i = 0; i < 10; i ++){
		cout << "|" << angka[i] << "| ";
	}
	for(int i = 0; i < 10;i++){
		if (angka[i] < 5 || angka[i] >= 7){
			nilai += angka[i];
			jumlah++;
		}
	}
	if(jumlah > 0){
		cout << endl;
		cout << "Jumlah = "<< jumlah <<endl;
		cout << "rata-rata = "<< nilai/jumlah<<endl; 
	}
}
