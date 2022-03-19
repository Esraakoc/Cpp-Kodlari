#include <iostream>
using namespace std;

int main()
{
	int basamak1, basamak2, basamak4, basamak5, sayi;
	cout << "---------Palindrom Sayisi Bulma---------" << endl;
	cout << "5 Basamakli sayi girin: ";
	cin >> sayi;

	if ((sayi < 100000) && (sayi > 9999))
	{
		basamak1 = sayi / 10000; //1.basamak (on binler basamağı)
		basamak2 = ((sayi % 10000) / 1000); //2.basamak (binler basamağı)
		basamak4 = ((((sayi % 10000) % 1000) % 100) / 10); //4.basamak (onlar basamağı)
		basamak5= ((((sayi % 10000) % 1000) % 100) % 10); //5. basamak (birler basamağı)

		if ((basamak1 == basamak5) && (basamak2 == basamak4))
		{
			cout << "Sayi Palindromdur..." << endl;
		}
		else
		{
			cout << "Sayi Palindrom degildir!" << endl;
		}
	}
	else
	{
		cout << "Girdiginiz sayi 5 basamakli degildir." << endl;
		return main();
	}


	return 0;
}
