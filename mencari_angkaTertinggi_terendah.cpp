#include<iostream>
using namespace std;

int main(){
	int tertinggi, terendah, n;
	float data[256];
	
	cout<<"==============================================="<<endl;
	cout<<"Program Menentukan Angka Terbesar dan Terkecil "<<endl;
	cout<<"==============================================="<<endl;
	
	cout<<"Masukkan N Data : ";
	cin>>n;
	cout<<endl;
	for(int i=0; i<n; i++){
		cout<<"Masukkan Data ke-"<<i+1<<" : ";
		cin>>data[i];
	}
	tertinggi = data[0];
	for(int i=1; i<n; i++){
		if(tertinggi<data[i])
		tertinggi=data[i];
		if(terendah>data[i])
		terendah=data[i];
	}
	cout<<"\n==============================================="<<endl;
	cout<<"Nilai Terbesar adalah"<<" "<<tertinggi<<endl;
	cout<<"Nilai Terkecil adalah"<<" "<<terendah<<endl;
	cout<<"==============================================="<<endl;
	
	return 0;
}
