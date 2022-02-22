#include <iostream>
using namespace std;

class m
{
public://önemli
	double x;
	double km()
	{           //km hm dam m dm cm mm 
		return x / 1000; //1m =0.001km
	}
	double hm()
	{
		return x / 100;
	}
	double dam()
	{
		return x / 10;
	}
	double dm()
	{
		return x * 10;
	}
	double cm()
	{
		return x * 100; //1m=100cm
	}
	double mm()
	{
		return x * 1000; //1m=1000mm
	}

};

int main()
{
	int secim;
	m cevirme;
	cevirme.x = 5.0; //class'da tanımladığımız x değiikenine değer atadık

	cout <<"\n"<< cevirme.x << "m = " << cevirme.km() << "km" << endl;
	cout << cevirme.x << "m= " << cevirme.hm() << "hm" << endl;
	cout << cevirme.x << "m= " << cevirme.dam() << "dam" << endl;
	cout << cevirme.x << "m= " << cevirme.dm() << "dm" << endl;
	cout << cevirme.x << "m = " << cevirme.cm() << "cm" << endl;
	cout << cevirme.x << "m = " << cevirme.mm() << "mm" << endl;

	m gir;
a:	cout << "Girecegin metre birimini hangi birime cevirmek istersin?" << "\n" << "1-km, 2-hm, 3-dam, 4-dm, 5-cm, 6-mm" << endl;
	cin >> secim;

	if (secim == 1)
	{
		cout << "m= ";
		cin >> gir.x;
		cout << gir.x << "m = " << gir.km() << "km" << endl;
	}
	else if (secim == 2)
	{
		cout << "m= ";
		cin >> gir.x;
		cout << gir.x << "m = " << gir.hm() << "hm" << endl;
	}
	else if (secim == 3)
	{
		cout << "m= ";
		cin >> gir.x;
		cout << gir.x << "m = " << gir.dam() << "dam" << endl;
	}
	else if (secim == 4)
	{
		cout << "m= ";
		cin >> gir.x;
		cout << gir.x << "m = " << gir.dm() << "dm" << endl;
	}
	else if (secim == 5)
	{
		cout << "m= ";
		cin >> gir.x;
		cout << gir.x << "m = " << gir.cm() << "cm" << endl;
	}
	else if (secim == 6)
	{
		cout << "m= ";
		cin >> gir.x;
		cout << gir.x << "m = " << gir.mm() << "mm" << endl;
	}
	else
	{
		cout << "Yanlis secim yaptiniz. Lutfen secenekler arasindan secim yapiniz." << endl;
		goto a;
	}
	cout << endl;

	
	return 0;
}
