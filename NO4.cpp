#include <iostream>
using namespace std;

int hkm(int bilangan);
int hm(int bilangan);
int hcm(int bilangan);
int hmm(int bilangan);

main(){
int bilangan;
cout<<"bilangan = "; cin>>bilangan;
int km = hkm(bilangan);
int m = hm(bilangan);
int cm = hcm(bilangan);
int mm = hmm(bilangan);

cout << "Hasil Konversi : " << km << " km, "<< m << " m, " << cm << " cm, " << mm << " mm, "<<endl;   
}

int hkm(int bilangan){
	return bilangan / 1000000;
}

int hm(int bilangan){
	return bilangan % 1000000 / 1000;
}

int hcm(int bilangan){
	return bilangan % 1000000 % 1000 / 100;
}

int hmm(int bilangan){
	return bilangan % 1000000 % 1000 % 100;
}

