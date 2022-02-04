#include <iostream>
using namespace std;
int main()
{
	int n, toplam = 0;
	int sayilar[1000];
	cout << "Eleman sayisi girin=";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "sayilar[" << i << "]=";
		cin >> sayilar[i];
		toplam += sayilar[i];
	}
	for (int i = 0; i < n; i++)
	{
		cout << sayilar[i] << "+";
	}
	cout << " = " << toplam << endl;
	system("pause");
}
