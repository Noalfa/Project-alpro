#include <iostream>
using namespace std;
void Konversi(int bilangan,int *jam, int *menit,int *detik);
int main(){
	int bilangan, jam, menit, detik;
	cout<<"bilangan = "; cin>>bilangan;
	Konversi(bilangan, &jam, &menit, &detik);
	 cout << bilangan << " detik = " << jam << " jam "<< menit << " menit " << detik << " detik" << endl;
}
void Konversi(int bilangan,int *jam, int *menit,int *detik){
	*jam = bilangan / 3600;
	bilangan = bilangan % 3600;
	
	*menit = bilangan / 60;
	*detik = bilangan % 60;
}

