#include <iostream>
using namespace std;

bool asalmi(int x) {
	for (int i = 2; i < x; i++) {
		if (x % i == 0) {
			return false;
		}
	}
	return true;
}

int main()
{
	/* cout << asalmi(19) << endl;
	cout << asalmi(38) << endl;
	cout << asalmi(60) << endl;
	cout << asalmi(97) << endl; */
	int c = 0;
	for (int i = 2; c < 20; i++) {
		if (asalmi(i)) {
			cout << i << endl;
			c++;
		}
	}
	return 0;
}
/*
int main()
{
	for (int i = 2; i <= 99; i++)
	{
		cout <<i <<" asalmi ? " << asalmi(i) << endl;
	}
	system("pause");
}
*/

