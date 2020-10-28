#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
int main (){
	string user,pass;
	string user1,pass1;
	int pilih,n1,n2,n3,m1,m2,m3;
	//apabila menggunakan char maka pada bagian case di beri tanda petik ('x')
	double t1,t2;
	
	
	cout<< "Login akun===========" <<endl;
	cout<< "Username    :";cin>>user;
	
	
	cout<< "Password    :";cin>>pass;
	
	cout<< "=====================" <<endl;
	if (user== "admin"  &&  pass== "123" ){
		cout<< "Selamat Anda Berhasil Login"<<endl;
		cout<<endl;
		cout<< "Input Nilai Mata Kuliah" <<endl;
		cout<< "1.Algoritma dan Pemograman" <<endl;
		cout<< "2.Kalkulus"<<endl;
		cout<< "Pilih : ";cin>>pilih;
		
		switch (pilih){
			case 1:
				cout<< "Nilai Harian :";cin>>n1;
				cout<< "Nilai UTS    :";cin>>n2;
				cout<< "Nilai UAS    :";cin>>n3;
				t1=(n1+n2+n3)/3;
					if (t1 >= 80){
					cout<< "Selamat anda lulus Algoritma dan Pemograman dengan rata-rata nilai " <<t1<<endl;
					}
					else {
					cout<< "Maap anda tidak lulus Algoritma dan Pemograman dengan rata-rata nilai " <<t1<<endl;
					}
				break;
			case 2:
				cout<< "Nilai Harian :";cin>>m1;
				cout<< "Nilai UTS    :";cin>>m2;
				cout<< "Nilai UAS    :";cin>>m3;
				t2=(m1+m2+m3)/3;
					if (t2 >= 80){
					cout<< "Selamat anda lulus Kalkulus dengan rata-rata nilai " <<t2<<endl;
					}
					else {
					cout<< "Maap anda tidak lulus Kalkulus dengan rata-rata nilai " <<t2<<endl;
					}
				break;
			default :
			 cout<< "error" <<endl;
			
		}	
			
	}
	else if (pass=="123" && user!="admin"){
		cout<< "Username Salah" <<endl;
	}
	else if (user=="admin" && pass!="123"){
		cout<< "Password Salah" <<endl;
	}
	else {
		cout<< "Username dan Password Salah" <<endl;
	}
	
	
	return 0;
	
	
	
	
	
		
	
	

}
