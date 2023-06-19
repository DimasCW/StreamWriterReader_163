#include<fstream>
#include<iostream>
#include<string>
using namespace std;

int main() {
	string baris;
	string NamaFile;

	cout << "masukkan nama file :";
	cin >> NamaFile;

	//membuka file dalam mode menulis.
	ofstream outfile;
	//menunjuk ke sebuah nama file
	//outfile.open("contohfile.txt");
	//outfile.open("D:/contohfile/contohfile.txt")
	outfile.open(NamaFile + ".txt", ios::out);

	cout << ">= Menulis file, \'q\' untuk keluar" << endl;

	//unlimited loop untuk menulis
	while (true) {
		cout << "- ";
		//mendapatkan setiap karakter dalam satu baris
		getline(cin, baris);
		//loop akan berhenti jika anda memasukkan karakter q
		if (baris == "q")break;
		//menulis dan memasukkan nilai dari 'baris' ke dalam file
		outfile << baris << endl;
	}
	outfile.close();

	ifstream infile;//ifstream untuk mode membuka dan emmbaca file

	//infile.open("contohfile.txt");
	//outfile.open("D:/contohfile/contohfile.txt")
	infile.open(NamaFile + ".txt", ios::in);

	cout << "membuka dan membaca file" << endl;

	if (infile.is_open())//jika file ada maka
	{
		//melakukan perulangan setiap baris
		while (getline(infile, baris)) {
			cout << baris << '\n';
		}
		infile.close();
	}
	//jika tidak ditemukan file maka akan menampilkan ini
	else cout << "unable to open file";
	return 0;
}