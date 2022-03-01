#include<iostream>
#include<string>
using namespace std;

struct insan
{
	int tc;
	string adi;
	string soyadi;
	string sehir;
};

int main()
{
	insan calisanlar[3];
	for (int i = 0; i < 3; i++)
	{
		insan a;
		cout << i + 1 << ". Calisanin adini giriniz: ";
		cin >> a.adi;
		cout<<"Calisanin soyadi: ";
		cin >> a.soyadi;
		cout << "Calisanin tc'si: ";
		cin >> a.tc;
		cout << "Calisanin yasadigi sehir: ";
		cin >> a.sehir;
		cout << endl;
		calisanlar[i] = a; //çalışanlardaki i. elemana atamış olduk
	}
	cout << "----------Calisanlarin Bilgileri----------" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << i + 1 << ". Calisanin adi: " << calisanlar[i].adi << endl;
		cout << "Calisanin soyadi: " << calisanlar[i].soyadi << endl;
		cout << "Calisanin tc'si: " << calisanlar[i].tc << endl;
		cout << "Calisanin yasadigi sehir: " << calisanlar[i].sehir << endl;
		cout << endl;
	}
	return 0;
}