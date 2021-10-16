#include<iostream>
using namespace std;

int main(){
	int x;
	cin>>x;
	float Eth[x], total=0, ratarata=0, usd=0;
	for(int i=0; i<x; i++){
		cin>>Eth[i];
		total = total + Eth[i];
	}
	cout<<endl;
	ratarata = total/x;
	usd = total * 4000;
	cout<<"Rata-Rata : "<<ratarata<<" ETH "<<endl;
	cout<<"Total ETH : "<<total<<" ETH "<<endl;
	cout<<"Dalam USD : $"<<usd<<endl;
	
	return 0;  
}
//Roy Rafles Matorang Pasaribu (NPM : 2117051058) Kelas B
