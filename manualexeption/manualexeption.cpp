#include<iostream>
using namespace std;

int main() {
	try {
		cout << "Selamat belajar di prodi TI" << endl;
		throw 0.5;//melempar sebuah intger maka
		cout << "pernyataan tidak akan dieksekusi" << endl;
	}
	catch (int a) {

	}
}
