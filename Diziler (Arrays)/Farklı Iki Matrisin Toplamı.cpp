#include <iostream>
using namespace std;
int main()
{
	int a[2][3] = { 0,1,2,9,8,7 };
	int b[2][3] = { 6,5,4,3,4,5 };
	int c[2][3];
	cout << "--------a MATRISI--------" << endl;
	for (int i = 0; i < 2; i++) 
	{
		for (int j = 0; j < 3; j++) 
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl << "--------b MATRISI--------" << endl;

	for (int i = 0; i < 2; i++) 
	{
		for (int j = 0; j < 3; j++) 
		{
			cout << b[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	//Toplamın Yapıldığı kısım
	for (int i = 0; i < 2; i++) 
	{
		for (int j = 0; j < 3; j++) 
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
	cout <<"Toplamlari: "<< endl;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << c[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
