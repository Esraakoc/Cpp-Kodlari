#include <iostream>
using namespace std;

int taban(int x, int y)
{
	double carpim = 1;
	for (int i = 0; i < y; i++)
	{
		carpim = carpim * x;
	}
	return carpim;
}

int main()
{
	int h, k;
	cout << "ilk once bulmak istediginiz taban ardindan ussu giriniz= "; cin >> h >> k;
	cout << h << "^" << k << " = " << taban(h, k) << endl;
	int m;
	cout << "2 nin hangi kuvvetini bulmak istiyorsunuz= ";
	cin >> m;
	cout << "2^" << m << " = " << taban(2, m) << endl;
	cout << "5^3 = " << taban(5, 3) << endl;
	system("pause");
}

