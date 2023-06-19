#include<iostream>
using namespace std;

int main() {
	try {
		cout << "Selamat belajar di prodi TI" << endl;
		throw 0.5;//melempar sebuah intger maka
		cout << "pernyataan tidak akan dieksekusi" << endl;
	}
	catch (int a) {
		//blok ini akan disesuaikan 
		cout << "pengecualian akan dieksekusi" << endl;
	}
	catch(...){
		//jika selain integer maka blok ini akan dieksekusi
		cout << "default pengecualian dieksekusi" << endl;
	}
	return 0;
}
