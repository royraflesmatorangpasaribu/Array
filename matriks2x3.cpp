#include <iostream>
using namespace std;

int main(){
	int matriks [2][3] = {{1,2,3},{5,6,7}};
	int baris, kolom;
	for (baris=0;baris<2;baris++){
		for (kolom=0;kolom<3;kolom++){
			cout<<matriks[baris][kolom]<<" ";
		}
	cout<<endl;
	}
	return 0;
}
