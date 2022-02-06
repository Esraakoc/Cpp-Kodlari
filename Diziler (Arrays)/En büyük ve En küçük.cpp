#include <iostream>
using namespace std;
int main()
{
	int sayi[1000];
	int n;
	cout << "Eleman sayisi girin=";
	cin >> n;
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "sayi[" << i << "] =";
		cin >> sayi[i];

	}
	int ek = sayi[0];
	int eb = sayi[0];
	for (int i = 0; i < n; i++)
	{

		if (ek > sayi[i])
		{
			ek = sayi[i];
		}
		if (eb < sayi[i])
		{
			eb = sayi[i];
		}
	}
	cout << "En buyuk sayi=" << eb << endl;
	cout << "En kucuk sayi=" << ek << endl;

	system("pause");
}
