#include <iostream>
using namespace std;

//“ciz” adlı üst sınıfa "sekil", “Kare” ve “Ucgen” alt sınıfları oluşturuldu.
//“ciz” metotu kullanılarak farklı iki geometrik şekli doğru şekilde çizilmesi sağlanır.

class sekil
{
public:
	void ciz()
	{
		cout << "sekil ciziliyor..." << endl;
	}
};
class Ucgen :public sekil
{
public:
	int k1, k2, k3;
	void ciz()
	{
		cout << "Ucgen ciziliyor..." << endl;
	}
};
class Kare : public sekil
{
public:
	int k1;
	void ciz()
	{
		cout << "Kare ciziliyor..." << endl;
	}
	void AlanHesapla()
	{
		cout << "Karenin alani:: " << k1 * k1 << endl;
	}
};

int main()
{
	sekil n1;
	n1.ciz();
	Ucgen n3;
	n3.k1 = 5;
	n3.k2 = 10;
	n3.k3 = 15;
	n3.ciz();
	cout << n3.k1 << " " << n3.k2 << " " << n3.k3 << endl;
	Kare n2;
	n2.ciz();
	n2.k1 = 10;
	n2.AlanHesapla();

	return 0;
}
