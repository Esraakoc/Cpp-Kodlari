#include <iostream>
using namespace std;
int main()
{
	int t[3][3] = { {57,46,9},{11,18,3},{105,28,48} };
	int temp;
	//SATIRLARI SIRALAMA KISMI
	for (int a = 0; a < 2; a++)
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				if (t[i][j] > t[i][j + 1])
				{
					temp = t[i][j];
					t[i][j] = t[i][j + 1];
					t[i][j + 1] = temp;
				}
			}
		}
	}
	//SÜTUNLARI SIRALAMA KISMI
	for (int a = 0; a < 2; a++)
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 2; j++)
			{
				if (t[j][i] > t[j + 1][i])
				{
					temp = t[j][i];
					t[j][i] = t[j + 1][i];
					t[j + 1][i] = temp;
				}
			}
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << t[i][j] << "\t";
		}
		cout << endl;
	}
	system("pause");
}
