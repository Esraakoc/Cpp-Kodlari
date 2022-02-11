#include <iostream>
#include <ctime>
using namespace std;

void DiziElemaniSil(int a[], int sira, int boyut)
{

	for (int i = 0; i < boyut; i++)
	{
		if (i+1 == sira)
		{
			cout << " ";
		}
		else
			cout << i+1 << ". eleman: " << a[i] << "\t";
	}
}
int main()
{
	int n;
	int siraNo;
	cout << "Kac Adet Sira No Uretilecek: ";
	cin >> n;
	int dizi[100];
	srand(time(0));
	for (int i = 0; i < n; i++)
	{
		dizi[i] = rand() % 100;
		cout << dizi[i] << "\t";
	}
	cout << "\n\n";
a:	cout << "Diziden Silinecek Degerin Sira No'sunu Giriniz; ";
	cin >> siraNo;
	if (siraNo > n)
	{
		cout << "Lutfen " << n << " ve ya " << n << " 'den kucuk bir deger giriniz" << endl;
		goto a;
	}
	DiziElemaniSil(dizi, siraNo, n);

	return 0;
}
