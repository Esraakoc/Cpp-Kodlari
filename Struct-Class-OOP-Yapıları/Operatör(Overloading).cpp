#include <iostream>
using namespace std;

class Sinif
{
public:
	int x;
	int y;
	Sinif(int a, int b)
	{
		x = a;
		y = b;
	}
	Sinif operator -()
	{
		return Sinif(-x, -y);
	}
	Sinif operator *()
	{
		return Sinif(2 * x, 3 * y);
	}
	Sinif operator +()
	{
		return Sinif(2 * -x, 3 * y);
	}
};
int main()
{
	Sinif M(10, 20);
	Sinif S = -M;
	Sinif T = *M;
	Sinif O = +M;

	cout << "M Fonksiyonu(x): " << M.x << endl;
	cout << "M Fonksiyonu(y): " << M.y << endl;
	cout << "S Fonksiyonu(x): " << S.x << endl;
	cout << "S Fonksiyonu(y): " << S.y << endl;
	cout << "T Fonksiyonu(x): " << T.x << endl;
	cout << "T Fonksiyonu(y): " << T.y << endl;
	cout << "O Fonksiyonu(x): " << O.x << endl; //-20 yazdırıcak
	cout << "O Fonksiyonu(y): " << O.y << endl;
	return 0;
}