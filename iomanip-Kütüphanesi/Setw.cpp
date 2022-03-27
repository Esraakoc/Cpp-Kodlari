#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
	int sayi=234;
	string a = "esra";

	cout << setw(9) << sayi << endl; // (9): yazdığımızı satırın başından itibaren 9. sütunda(boşlukta) biter.
	cout << setw(4) << sayi << endl;
	cout << setw(1) << sayi << endl;//sayı 3 basamaklı olduğundan dolayı satırın en başından başlıcak sayıyı girmeye.
	cout << setw(3) << sayi << endl;// (1) ile aynı sütundan başlıcak .
	cout << setw(6) << a << endl; //--esra 
	return 0;
}