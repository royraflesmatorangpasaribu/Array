#include<iostream>
using namespace std;

//fungsi utama
int main(){
	char nama[50] = "Roy Rafles MatorAng Pasaribu";
	
	for(char x:nama){
		if( x== 'a'||x=='A'){
			cout<<"*";
		}
		else{
			cout<<x;
			
		}
	}
}

