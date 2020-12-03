#include<iostream>
using namespace std;
int main(){
	int p;
	cout<< "Gambar Bangun Datar ==========" <<endl;
	cout<< "1. Kotak Bolong\n2. Segitiga" <<endl;
	
	cout<< "Pilih = ";cin>>p;
	switch(p){
		case 1 : int c,d;
				 cout<<"input Panjang : ";cin>>c;
				 cout<<"input Lebar   : ";cin>>d;

					if (c > 2){
						for (int i=0; i < c; i++){
							for (int j=0; j < d; j++) {
								if ((i==0) || (i==c-1) || (j==0) || (j==d-1)) {
									cout<<"*";
								}
								else{
									if (d%2==1){
									{
										cout<<" ";
									}
								}
									else {
										cout<<" ";
									}
							}
						}
						cout<<"\n";
					}
				}
				break;
			case 2 : int m;
	
					cout << "Tinggi: ";
					cin >> m;

					for(int i = 1; i <= m; i++)	
						{  int a,b; 
							a=m;
							b=i;
							a--;
							for(int j = 1; j <= i;j++)
							{
							   cout<<b<< " ";
							   b=b+a;
							   a--;
							   
							}

							cout << endl;
						}
					break;
				default:
				cout<<"error";
			}



cin.get();
return 0;
}
