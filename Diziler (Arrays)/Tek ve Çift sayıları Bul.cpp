#include <iostream>
using namespace std;

int main()
{
	int matris[4][4] = { {45,78,56,11},{87,12,99,33},{6,4,1,7},{85,41,96,45} };
	int tek[16];
	int cift[16];
	int y = 0, x = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (matris[i][j] % 2 == 0)
			{
				cift[y] = matris[i][j];
				y++;
			}
			else
			{
				tek[x] = matris[i][j];
				x++;
			}
		}
	}
	cout << "cift sayilarin matrisi: ";
	for (int i = 0; i < y; i++)
	{
		cout << cift[i] << "\t";
	}
	cout << "\n";
	cout << "tek sayilarin matrisi: ";
	for (int i = 0; i < x; i++)
	{
		cout << tek[i] << "\t";
	}

	return 0;
}
