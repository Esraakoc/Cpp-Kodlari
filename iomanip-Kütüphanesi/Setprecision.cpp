#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << fixed << setprecision(2);//virgülden sonra sadece 2 basamak yazdırır.

	float sayi, adet, toplam = 0, ortalama;

	cout << "Kac adet sayi gireceksiniz? ";
	cin >> adet;
	for (int i = 0; i < adet; i++)
	{
		cout << "Sayi giriniz: ";
		cin >> sayi;
		toplam += sayi;
	}

	ortalama = toplam / adet;
	cout << "Ortalama: " << ortalama << endl;
	
	return 0;
}