#include <iostream>
using namespace std;

int main(){
//Penjumlahan 2 matriks
	int matriks1[3][3];
	int matriks2[3][3];
	int hasil[3][3];
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout << "matriks 1 elemen ke "<< "[" << i+1 << "][" << j+1 << "] :";
			cin >> matriks1[i][j];
		}
		cout << endl;
	}
	cout<<endl;
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout << "matriks 2 elemen ke "<< "[" << i+1 << "][" << j+1 << "] :";
			cin >> matriks2[i][j];
		}
		cout << endl;
	}
	cout<<endl;
	
		cout << "Hasil Penjumlahan Matriks"<< endl;
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
			hasil[i][j] = matriks1[i][j] - matriks2[i][j];
			cout << hasil[i][j] <<"   ";
		}
		cout << endl;
	}
	cout<<endl;

return 0;
}
