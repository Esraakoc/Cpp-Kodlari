#include <iostream>
using namespace std;
//Kalıtımda sınıfları birbirinden türetebilmektedir.
//--------------İnherit(Kalıtım-MirasAlma)--------------
class Araba
{
public:
	string marka;
	int model;
	int ucret;
	void calistir()
	{
		cout << marka << " arabasi calisti.." << endl;
	}
};
class Toyota :public Araba //class Araba sınıfının içindeki public kısmını Toyota ya miras bıraktı
{
public:
	string klima;

};
class Opel : public Araba //class Araba sınıfının içindeki public kısmını Opel e miras(kalıtım) bıraktı
{
public:
	string abs;
};

int main()
{
	Toyota t1;
	t1.marka = "toyota";
	Opel o1;
	o1.marka = "opel";
	t1.klima = "Klimasi vardir ";
	o1.abs = "abs sistemi son model ";

	t1.calistir();
	cout << " ==>> " << t1.klima << endl << endl;
	o1.calistir();
	cout << "==>> " << o1.abs << endl;

	return 0;
}
