#include <iostream>
using namespace std;

int x,y;
int tabel[3][5] = {{1, 2, 3, 4, 2},{2, 4, 6, 8, 7},{3, 6, 9, 2, 9}};

int main (){
	for(x=0; x<3; x++){
		for (y=0; y<5; y++){
			cout << tabel[x][y] << " ";	
		}
		cout << "\n";
	}

	return 0;
}

