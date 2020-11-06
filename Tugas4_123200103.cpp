#include <iostream>
using namespace std;
int main (){
	int pilih,n,m,o;
	int x;
	do{
	
	cout<< "=====Perkalian & Perpangkatan====="<<endl;
	cout<< "1.Perkalian " <<endl;
	cout<< "2.Perpangkatan " <<endl;
	cout<< "Pilih = ";cin>>pilih;
	switch (pilih){
		case 1 :
		cout<< "Masukan N = ";cin>>n;
		cout<< "Masukan M = ";cin>>m;
		cout<< "\nHasil " << n << "x" << m <<endl;
		
		cout << n;
		o = n;
		for (int i=1;i<m;i++){
			cout<< "+" << n;
			o=o + n;
		}
		cout<< "=" << o <<endl;
		break;
		
		
		case 2 :
		cout<< "Masukan N = ";cin>>n;
		cout<< "Masukan M = ";cin>>m;
		cout<< "\nHasil " << n << "^" << m <<endl;
		
		o=n;
		cout << n;
		for (int j=1;j<m;j++){
			cout<< "x" <<n;
			o=o*n;
		}
		cout<< "=" << o <<endl;
		break;
	default:
		cout<< "\nSalah Input" <<endl;
		break;
	}
	cout<< "\nTerimah Kasih " <<endl <<endl;
	cout<< "Ingin Menghitung Lagi ?" <<endl;
	cout<< "1 = ya || 2 = tidak" <<endl;
	cin>>x;
	cout<<endl;
	}
	while(x==1);
	if   (x==2){
		cout<< "Terimah Kasih" <<endl;
		cout<< "Program Selesai" <<endl;
	}
	else {
		cout<< "Salah Input" <<endl;
	}
	
	system("pause");
	cin.get();
	return 0;
	
		
			
		

	
}
