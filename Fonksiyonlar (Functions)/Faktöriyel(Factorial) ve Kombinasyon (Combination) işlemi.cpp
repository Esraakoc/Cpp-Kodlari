#include <iostream>
using namespace std;
/*  x=4 olsun
3.	4*faktoriyelR(3)	=4*6=24
2.	3*faktoriyelR(2)	=3*2 =6
1.	2*faktoriyelR(1)	=2*1 =2
*/
double faktoriyelr(double n)
{
	if (n == 1) {
		return 1;
	}
	return n * faktoriyelr(n - 1);
}
double faktoriyel(double x)
{
	double carpim = 1;
	for (int i = x; i > 0; i--) {
		carpim = carpim * i;
	}
	return carpim;
}
int kombinasyon(int n, int r) {
	return faktoriyel(n) / (faktoriyel(r) * faktoriyel(n - r));
}

int main()
{
	cout <<"6! = "<< faktoriyel(6) << endl;
	cout << "(5,2) nin kombinasyonu = " << kombinasyon(5, 2) << endl;
	cout << "5! = " << faktoriyelr(5) << endl;
	int y;
	cout << "faktoriyelini hesaplamak istediginiz sayiyi girin= "; cin >> y;
	cout << y << "!= " << faktoriyel(y) << endl;

}
