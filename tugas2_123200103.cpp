#include <iostream>
using namespace std;
int main(){
	string nama;
	int usia,b;
	double total1,total2,total3,total4;
	
	
	cout<<"Ayah         :";
	cin>>usia;
	if (usia < 12) {
		total1=15000;
	}
	else if (usia >=12 && usia <=20) {
		total1=20000;
	}
	else if (usia > 20) {
		total1=30000;
	}
	cout<<"Ibu          :";
	cin>>usia;
	if (usia < 12) {
		total2=15000;
	}
	else if (usia >=12 && usia <=20) {
		total2=20000;
	}
	else if (usia > 20) {
		total2=30000;
	}
	cout<<"Anak Pertama :";
	cin>>usia;
	if (usia < 12) {
		total3=15000;
	}
	else if (usia >=12 && usia <=20) {
		total3=20000;
	}
	else if (usia > 20) {
		total3=30000;
	}
	cout<<"Anak Kedua   :";
	cin>>usia;
	if (usia < 12) {
		total4=15000;
	}
	else if (usia >=12 && usia <=20) {
		total4=20000;
	}
	else if (usia > 20) {
		total4=30000;
		
	}
	//b=total1*30+total2*30+total3*30+total4*30;
	//b=(total1*30)+(total2*30)+(total3*30)+(total4*30);
	b=(total1+total2+total3+total4)*30;
	
	
	
	cout<<"Maka Biaya perbulan Adalah :"<<b<<endl;
	cout<<"Manfaatkan Bantuan Ini Sebaik Mungkin"<<endl;
	return 0;
	
}
