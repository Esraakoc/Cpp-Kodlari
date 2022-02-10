#include <iostream>
using namespace std;


float faktoriyel(int x)
{
	if (x == 1)
	{
		return 1;
	}
	return x * faktoriyel(x - 1);
}

int main()
{
	float f[2][3];
	cout << "2 ye 3 luk bir faktoriyelli matris yapilacaktir." << endl;
	cout << endl;

	int k = 2;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			f[i][j] = faktoriyel(k);
			cout << k << "!= " << f[i][j] << "\t";
			k = k + 3;
		}
		cout << endl;
	}
	system("pause");
}
