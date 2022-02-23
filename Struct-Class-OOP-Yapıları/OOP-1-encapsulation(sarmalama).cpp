#include <iostream>
using namespace std;

class ogrenci
{
	//Sarmalama ilkesi, bir sınıfa ait değişkenlerin veya niteliklerin ancak
	//o sınıfa ait metotlar tarafından değiştirilebilmesi ve okunabilmesi ilkesidir.
	
private:
	int notu;

public:
	string ad;
	void SetMetot(int a)
	{
		if (a <= 100 && a >= 0)
		{
			notu = a;
		}
		else
		{
			cout << "hatali giris" << endl;
		}
	}
	int GetMetot()
	{
		return notu;
	}
};


int main()
{
	//OOP Prensipleri  1-encapsulation: sarmalama  2-inheritance: kalıtım(miras alma)  3-polimormphizm: çok biçimlilik
	ogrenci n1;
	n1.ad = "Mehmet";
	n1.SetMetot(90);

	cout << n1.ad << " Isimli ogrencinin notu: " << n1.GetMetot() << endl;


	return 0;
}
