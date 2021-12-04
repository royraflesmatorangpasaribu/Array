#include<iostream>
using namespace std;

//minimal terdapat 1 fungsi dalam C++
int main(){
	//deklarasi variabel yang akan digunakan
	int array[256], n, i;
	float total, ratarata;
	total=0;
	
	//judul program
	cout<<"===================================="<<endl;
	cout<<"    Program Menghitung rata-rata    "<<endl;
	cout<<"        oleh Roy Rafles M.P         "<<endl;
	cout<<"===================================="<<endl<<endl;
	
	//inputan 
	cout<<"Masukkan Banyak Data : ";
	cin>>n;
	cout<<"Masukkan "<<n<<" Data (setiap masukkan 1 data klik enter) : ";
	cout<<"\n";
	
	//menyimpan setiap data yang di inputkan ke dalam array
	for(i=0; i<n; i++){
		cin>>array[1];
		//total penjumlahan data yang diinputkan
		total=total+array[1];	
	}
	cout<<"\n";
	
	//menghitung rata-rata dari data yang diinputkan
	ratarata=(total/n);
	
	//output
	cout<<"Rata-rata dari "<<n<<" Data yang di inputkan adalah "<<ratarata;
	
	//karena menggunakan fungsi main()
	return 0;
}
