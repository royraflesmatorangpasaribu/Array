/* searching itu adalah salah satu teknik dalam pemrograman 
untuk mencari data, apakah data tersebut ada di dalam
suatu kumpulan data */

/* dequential search -> membandingkan  data/angka yang di cari dengan seluruh elemen
pada suatu data secara satu persatu */

#include<iostream>
using namespace std;

int main(){
	//array
	int arr[5]={2,3,4,5,5};
	//deklarasi variabel
	int cari;
	bool cek = false;
	
	//input
	cout<<"angka yang ingin dicari : ";
	cin>>cari;
	
	for(int i=0; i<5; i++){
		if(cari==arr[i]){  //apakah ... itu sama dengan ... ? jika true cetak
			cout<<"data ditemukan pada indeks ke- "<< i+1 <<endl;
			cek = true;
		}
	}
	if(cek==false){
		cout<<"data tidak ditemukan";
		
	}
	//karena menggunakan fungsi main()
		return 0;
}
