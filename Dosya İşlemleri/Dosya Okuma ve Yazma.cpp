#include <iostream>
#include<string>
#include <fstream> //fstream'i kütüphaneye kesinlikle eklemeliyiz Dosya işlemlerini yaparken
using namespace std;

int main()
{
	//Dosya işemleri
	//1-ofstream :: Bu veri türü, çıktı dosyası akışını temsil eder, dosyalar oluşturmak 
	// ve dosyalara bilgi yazmak için kullanılır.
	//ifstream :: Bu veri türü, girdi dosyası akışını temsil eder ve dosyalardan bilgi okumak için kullanılır.
	//eof :: end of file demek, sonuna geldik anlamı vardır.
	
	//-------Dosya Oluşturma ve Yazma-------
	// 
	//Birinci Yöntem
	ofstream yazmaDosyasi("belge.txt"); //Dosya oluşturduk, daha önce bu dosya varsa bunu açar ve 
	// önceki yazılanları siler yeni yazdığımızı ekler
	yazmaDosyasi << "C++ programlama ile ..." << endl; //Dosya'ya yazdık
	yazmaDosyasi << "merhaba" << endl; //2.satıra yazar
	yazmaDosyasi.close();  //Dosya Kapatma,  bu satırdan sonra bu dosya ile ilgili bişe yapılmaz

	//İkinci Yöntem
	ofstream yazmaDosyasi2("deneme\\deneme.txt");//hangi klasörde dosya oluşturucaksak yeri buraya yazılabilir
	yazmaDosyasi2 << "deneme deneme" << endl;
	yazmaDosyasi2.close();

	//Üçüncü Yöntem
	ofstream yazmaDosyasi3("C:\\Dosya Okuma ve Yazma\\aaa\\bbb\\deneme2.txt");
	yazmaDosyasi3 << "bir iki uc" << endl;
	yazmaDosyasi3.close();


	////-------Dosya Okuma-------

	//Birinci yöntem 
	ifstream okumaDosyasi("dosya1.txt");//dosyayı çağırdık
	string satir;
	getline(okumaDosyasi, satir);//dosyayı ve satırı belirledik
	cout << satir << endl<<endl; //ilk satırı yazdırdık
	okumaDosyasi.close();// dosyayı kapattık


	//İkinci Yöntem (Bütün satırları yazdırmak için)
	ifstream okumaDosyasi2("dosya2.txt");
	string satir1;
	while (getline(okumaDosyasi2, satir1)) //okunucak başka satır kalmadığında durur
	{ 
	cout << satir1 << endl;
	}
	okumaDosyasi2.close();


	//=>> kelime kelime dosya okuma
	string kelime;
	ifstream okumaDosyasi3("dosya3.txt"); //Dosyay belirledik çağırdık
	okumaDosyasi3 >> kelime; //gelen dosyadaki 1.kelimeyi çağırdık
	cout <<endl<< kelime<<endl; //1.kelimeyi yazdırdık
	
	okumaDosyasi3 >> kelime; //gelen dosyadaki bi sonraki yani 2.kelimeyi çağırdık
	cout << kelime << endl << endl;; //2.kelimeyi yazdırdık

	okumaDosyasi3.close(); //kapattık


	//Dosyanin içindeki bütün olan kelimeleri ayzdırmak için
	string kelime1;
	ifstream okumaDosyasi4("dosya4.txt");
	while (okumaDosyasi4 >> kelime1) //kelime sayisi bitince durur
	{
	cout << kelime1 << endl;
	}
	cout << endl;
	okumaDosyasi4.close();


	//Dosyanin içindeki bütün olan kelimeleri yazdırmak için
	string kelime2;
	ifstream okumaDosyasi5("dosya5.txt");
	while (!okumaDosyasi5.eof() ) //dosyadaki kelime sayısının sonuna geldiğinde durur
	{
		okumaDosyasi5 >> kelime2;
		cout << kelime2 << endl;
	}
	okumaDosyasi5.close();



	return 0;
}
