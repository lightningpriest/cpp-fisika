#include <iostream>
using namespace std;

int main() {
	float v, s, t;
	cout << "Penghitung Kecepatan" << endl;
	cout << "-----------------------------------" << endl;
	cout << "Masukan Jarak Tempuh (Km)  : ";
	cin >> s;
	cout << "Masukan Waktu Tempuh (Jam) : ";
	cin >> t;
	v = s / t;
	cout << "Kecepatan (Km/jam)         : " << v << endl;
}
