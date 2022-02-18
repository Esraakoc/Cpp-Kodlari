#include <iostream>
using namespace std;

bool tekCift(int x) //bool değişkeni 1 0 yazıdırır
{
	if (x % 2 ==1)
	{
		return true; //tekCift() yazınca 1 yazıdırıcak
	}
	else
	{
		return false; //0 yazdırır
	}
}

int main()
{
	int sayi, tek = 0, cift =0;
	for (int i = 1; i <= 10; i++)
	{
		cout <<"\t" << i << ". sayiyi giriniz: ";
		cin >> sayi;
		tekCift(sayi);
		if (tekCift(sayi))
		{
			tek++;
		}
		else
		{
			cift++;
		}
	}
	cout << endl << "\t" << "Tek sayi adedi: " << tek << endl;
	cout << "\t" << "Cift sayi adedi: " << cift << endl;

	return 0;
}