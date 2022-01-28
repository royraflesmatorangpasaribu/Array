#include<iostream>
using namespace std;

//program dibuat oleh roy rafles matorang pasaribu

//fungsi utama
int main(){
	//array data nama
	char nama[256] = "Roy Rafles MatorAng Pasaribu";
	
	for(char x:nama){
		//pengkondisian huruf yang akan diubah menjadi bintang (*)
		if( x== 'a'|| x=='A'){
			cout<<"*";
		}
		//pengkondisian salah
		else{
			cout<<x;
		}
	}
	//karena menggunakan fungsi main()
	return 0;
}

