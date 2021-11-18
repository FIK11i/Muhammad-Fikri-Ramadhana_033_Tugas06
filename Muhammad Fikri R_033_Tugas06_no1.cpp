//Progam mencari nilai maksimal dari n menggunakan fungsi parameter
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int n,a,min,max;
	int *Tmin,*Tmax;
	
	cout<<"=========================================================="<<endl;
	cout<<"|          Progam Mencari Nilai Maksimal dari N          |"<<endl;
	cout<<"=========================================================="<<endl;
	cout<<"\n";
	
	cout<<"| Masukkan Jumlah Data Bilangan N : "; cin>>n;
	cout<<"----------------------------------------------------------"<<endl;
	cout<<"\n";
	
	for (int i=1;i<=n;i++)
	{
		cout<<"| Masukkan Angka Data ke-"<<i<<" : "; cin>>a;
		
		
		if (i==1){
			min=a;
			max=a;
		}
		else if (min>a){
			min=a;
		}
		else if (max<a){
			max=a;
		}
		else {}
		
		Tmin=&min;
		*Tmin=min;
		Tmax=&max;
		*Tmax=max;
	}
	cout<<"----------------------------------------------------------"<<endl;
	cout<<"\n";
	
	cout<<"| Nilai Maksimal Bilangan N : "<<*Tmax<<endl;
	cout<<"| Nilai Minimal Bilangan N  : "<<*Tmin<<endl;
	
	getch();
}
