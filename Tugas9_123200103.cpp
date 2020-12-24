#include <iostream>
using namespace std;
int main (){
	int a,i=1,min,max;
	float b,c;
	
	cout<<"Masukan banyak angka : ";cin>>a;
	int x[a];
	for(i=0;i<a;i++){
		cout<<"Angka ke- "<<(i+1)<<": ";cin>>x[i];
		
	}
	cout<<"\n\n";
	cout<<"_____Hasil_____"<<endl;
	cout<<"Deret           : ";
	for(i=0;i<a;i++){
		cout<<x[i]<<" ";}
		
	
	for ( i = 0; i < a; i++) {
		  if ( i == 0 ) {
             min = x[i];
             max = x[i];
            }
            else if ( min > x[i] ) {
               min = x[i];
            }
            else if ( max < x[i]) {
               max = x[i];
           }
           else {}
           }

       cout << endl; 
       cout << "Maksimum        : " <<  max << endl;
       cout << "Minimum         : " <<  min << endl;
        
       b=0;
       for(i=0;i<a;i++){
		   b=b+x[i];
		   }
	   c=b/a;
	   cout<<"Rata-rata       : "<< c;
	   
	   int selisih,selisih_max;
	   selisih_max=0;
	   for(i=0;i<a;i++){
	   selisih=x[i]-x[i+1];
	   if (i == a-1){
		   selisih = x[i-1]-x[i];
	   }
	   
	   if(selisih<0){
		   selisih*=-1;
		   }
	   if(selisih>selisih_max){
		  selisih_max=selisih;
		  
		   }
	   }
	   cout<<"\nSelisih Max     : "<<selisih_max;
	   
	   
	   
	 
	   
		   
		   
return 0;
}
