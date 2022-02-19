/*Ampersand(&) işaretli olanlar ise; p = &a; Anlamı ==> a değerinin adresini p değerine tanımla demek oluyor.
Pointer tanımlamak istersek * ile tanımlıyoruz ve içine  herhangi bir değer vermemiz gerekmiyor.ör==  int *p
*/
#include <iostream>
using namespace std;
int main()
{
	int a = 10;
	int* p;
	p = &a;
	cout << "a: " << a << endl; //değerini verir
	cout << "*p: " << *p << endl; // diğer değişkenden almış olduğu değeri girer .
	cout << "&a: " << &a << endl; //kendi değişkeninin adresini girer
	cout << "p: " << p << endl; // diğer değişkenin adresini girer.
	cout << "&p: " << &p << endl;//p değişkeninin durduğu adresi verir yani p yi diğer değişkene atasak dahi kendi değişkeninin adresini vermiş olur.
	*p = 60;
	cout << "a: " << a << endl; //60 Girer
	cout << "-------------------------------" << endl;
	int x[3] = { 1,2,3 };
	int* q;
	q = x;//- q=&x[0] yazabilirdik AYNI şey olurdu, ama q= x[0]; yazmazdık YANLIŞ olur.
	cout << "*q: " << *q << endl;//1=x[0] ve q[0] da yazabilirdik aynı şey
	cout << "q: " << q << " == " << "&x[0]: " << &x[0] << endl; //q yü x e atadığımız için q , &x adresleri olmuş oluyor, aynısıdır
	cout << "*q+1: " << *q + 1 << endl;//x[1]=2
	cout << "q[2]: " << q[2] << endl;// 3 basar = *q+2 de aynı değeri basardı
	q[2] = 8;
	cout << "x[2]: " << x[2] << endl;//8 basar çünkü üstte 8 e eşitledik
	int* qq;
	qq = x;
	cout << "qq[2]: " << qq[2];
	//qq[2]=q[2]=x[2]
}
