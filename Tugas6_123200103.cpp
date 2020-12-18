#include <iostream>
using namespace std;
int a,b,c;
char d;

float luas(){
	float ll=3.14*a*a;
	return ll;
}

float kllg(){
	float kl=3.14*2*a;
	return kl;
}

float vtbg(){
	float vol=3.14*(a*a)*c;
	return vol;
}
	
int main(){
	do{
	cout<<"Hitung Lingkaran =========="<<endl;
	cout<<"1. Luas Lingkaran \n2. Keliling Lingkaran \n3. Volume Tabung "<<endl;
	cout<<"Pilih = ";cin>>b;
	if(b==1){
		cout<<"Jari-jari : ";cin>>a;
		cout<<"Luas Lingkaran adalah "<<luas()<<endl;
	}
	else if (b==2){
		cout<<"Jari-jari : ";cin>>a;
		cout<<"Keliling lingkaran adalah "<<kllg()<<endl;
	}
	else if (b==3){
		cout<<"Jari-jari : ";cin>>a;
		cout<<"Tinggi    : ";cin>>c;
		cout<<"Volume Tabung adalah "<<vtbg()<<endl;
	}
	cout<<"Ulangi Program y/n ? ";cin>>d;
	}
	while(d=='y');
	
	return 0;
}
	
	
