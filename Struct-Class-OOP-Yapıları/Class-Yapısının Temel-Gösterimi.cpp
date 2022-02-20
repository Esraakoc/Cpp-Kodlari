#include <iostream>
#include <string>
using namespace std;

class student 
{

public://Herkese açık
	string name;
};

int main()
{
	student student1;
	student student2;

	student1.name = "Esra";
	student2.name = "Arzu";

	cout << "1.ogrencinin ismi: " << student1.name << endl;
	cout << "2.ogrencinin ismi: " << student2.name << endl;

	return 0;
}