#include<iostream>

using namespace std;
int main()
{   char ulang;

	cout<<"=============================================="<<endl;
	cout<<"Program Menentukan Angka Terbesar dari 4 data "<<endl;
	cout<<"=============================================="<<endl;

    do{
    int a,b,c,d;
    cout<<"Masukkan angka Ke-1 : ";
    cin>>a;
    cout<<"Masukkan angka Ke-2 : ";
    cin>>b;
    cout<<"Masukkan angka Ke-3 : ";
    cin>>c;
    cout<<"Masukkan angka Ke-4 : ";
    cin>>d;
    
    
    c=(a>b?a:b);
	
	cout<<endl;    
    cout<<"Angka terbesar adalah "<<(d>c?d:c)<<endl;
    cout<<"Ingin coba lagi? (Y/N) ";cin>>ulang;
    }while(ulang=='Y'||ulang=='y');
    cin.get();
    
    return 0;
}
