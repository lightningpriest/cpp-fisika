#include <iostream>
using namespace std;

int main (){
	float v,s,t;
	cout<<"Penghitung Waktu Tempuh"<<endl;
	cout<<"-----------------------------------"<<endl;
	cout<<"Masukan Jarak (Km)         : ";
	cin>>s;
	cout<<"Masukan Kecepatan (Km/jam) : ";
	cin>>v;
	t=s/v;
	cout<<"Waktu Tempuh (Jam)         : "<<t<<endl;
}
