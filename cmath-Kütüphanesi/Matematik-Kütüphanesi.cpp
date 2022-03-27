#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	cout << fixed << setprecision(1);//virgülden sonraki sayının 1 basamağını yazar

	cout << "sprt(" << 9.0 << ") = " << sqrt(9.0);//kök
	cout << "\nexp(" << 1.0 << ") = e uzeri = "<< setprecision(6) << exp(1.0);//e üzeri bir değerdir.
	cout << "\nlog10(" << 100.0 << ") = " << log10(100.0);
	cout << "\nlog(" << setprecision(1) << 7.389056 << ") = " << log(7.389056);
	cout << "\nfabs(" << 5.1 << ") = " << fabs(5.1)
		 << "\nfabs(" << -8.76 << ") = " << fabs(-8.76); //Mutlak değeri alınacak float bir değerdir. 
	cout << "\nceil(" << 9.2 << ") = " << ceil(9.2); //Ondalıklı sayıyı yukarı doğru yuvarlamakta kullanılır.
	cout << "\nceil(" << -9.8 << ") = " << ceil(-9.8);
	cout << "\nfloor(" << 9.2 << ") = " << floor(9.8);//Ondalıklı sayıyı aşağı doğru yuvarlamakta kullanılır.
	cout << "\nfloor(" << -9.8 << ") = " << floor(-9.8); 
	cout << "\npow(" << 2.0 << "," << 7.0 << ") = " << pow(2, 7); //2 üzeri 7
	cout << "\nfmod(" <<setprecision(3) << 2.6 << "," << 1.2 << ") = " << fmod(2.6, 1.2) << setprecision(1);//bölme işlemindeki kalanını verir
	cout << "\nsin(" << 0.0 << ") = " << sin(0.0);
	cout << "\ncos(" << 0.0 << ") = " << cos(0.0) << endl;
	return 0;
}