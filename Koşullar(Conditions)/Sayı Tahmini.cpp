#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	int bil, my;
	srand(time(NULL)); //her zaman diliminde rastgele sayı üretmesi için
	bil = rand() % 101; // 0 ile 100 arasında bir sayı seçsin 
	cout << "0 ile 100 arasinde sayi giriniz: ";
	cin >> my;
	int sayac = 1; //sayiyi kaçıncı tahminde bildiğimizi göstermesi için
	if ((my >= 0) && (my <= 100))
	{
		while (bil != my) //tahmin ettiğimiz sayi seçilen sayiyla eşit değil ise
		{
			if (my < bil) //tahmin edilen sayi seçtiğimiz sayıdan büyük ise
			{
				cout << "sayiyi buyutun" << endl;
			}
			else //tahmin edilen sayi seçtiğimiz sayıdan küçük ise
			{
				cout << "sayiyi kucultun" << endl;
			}
			cin >> my;
			sayac++; // sayıyı her bilemediğimizde 1 artıcak 
		}
		cout << "Tebrikler bildiniz" << endl << "sayiyi " << sayac << ". tahminde bildiniz" << endl;
	}
	else
	{
		cout << "0 ile 100 arasinda bir sayi girmelisiniz!!" << endl;
		return main();
	}
		
}