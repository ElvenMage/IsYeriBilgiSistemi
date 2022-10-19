
#include <iostream>
using namespace std;
struct calisanlar {
	int calisanin_bilgi_numarasi;
	int numarasi;
	string adi;
	string e_mail;
};

int main() {
	calisanlar calisan1 = { 1,32,"Ab","ssa@xxx.yyy" };
	calisanlar calisan2 = { 2,33,"Cd","sea@xxx.yyy" };
	calisanlar calisan3 = { 3,34,"Ef","sseased@xxx.yyy" };
	cout << "Bilgi Numaranizi Giriniz --> ";
	int a;
	cin >> a;
	if (a == calisan1.calisanin_bilgi_numarasi) {
		cout << calisan1.numarasi << endl;
		cout << calisan1.adi << endl;
		cout << calisan1.e_mail << endl;
	}
	else if (a == calisan2.calisanin_bilgi_numarasi) {
		cout << calisan2.numarasi << endl;
		cout << calisan2.adi << endl;
		cout << calisan2.e_mail << endl;
	}
	else if (a == calisan3.calisanin_bilgi_numarasi) {
		cout << calisan3.numarasi << endl;
		cout << calisan3.adi << endl;
		cout << calisan3.e_mail << endl;
	}
	else {
		cout << "Gecersiz Bilgi Numarasi! " << endl;
	}
	system("pause");
	return 0;
}