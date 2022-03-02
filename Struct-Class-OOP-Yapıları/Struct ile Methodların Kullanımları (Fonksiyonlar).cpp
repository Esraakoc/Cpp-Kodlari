#include <iostream>
#include <string>
using namespace std;

struct Koordinat
{
	int x;
	int y;

	void merkez()
	{
		x = 0;
		y = 7;
	}
};
int main()
{
	Koordinat a;
	a.x = 5; //x=5 oldu
	a.y = 3;
	cout <<"x: "<< a.x << endl; //ekrana 5 değeri yazdırır
	cout << "y: " << a.y << endl << endl;
	a.merkez(); //fonksiyonu çağırdık ve x, y değerler aldı
	cout <<"x: "<< a.x << endl; //ekrana 0 değerii yazdırır
	cout << "y: " << a.y << endl;


	return 0;
}
