#include<iostream>
#include<exception>
//untuk obyek exception yang akan digunakan
#include<array>
//untuk obyek array yang akan kita gunakan
using namespace std;

int main() {
	cout << "awal program dijalankan" << endl;
	try {
		array<int, 3>data = { 1, 2, 3 };
		//pesan array integer 3 elemen
		cout << data.at(4) << endl;
		//mengambil array eleemen ke 5
	}
	catch (exception& e) {
		//penangkap emnggunakan objek exception
		cout << e.what() << endl;
		//akan dieksekusi karna array data hanya memiliki 3 elemen

	}
}
