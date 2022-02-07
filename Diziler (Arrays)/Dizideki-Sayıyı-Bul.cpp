#include <iostream>
using namespace std;
int main()
{
	int a[2][5] = { {3,7,11,9,8},{3,2,5,3,6} };
	int i, j, s = 0, n;
	cout << "Hangi sayinin kac tane oldugunu bulmak istersin? ";
	cin >> n;
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 4; j++)
		{
			if (a[i][j] == n)
			{
				s++;
			}
		}
	}
	cout << "Dizide " << s << " tane " << n << " vardir." << endl;
	return 0;
}
