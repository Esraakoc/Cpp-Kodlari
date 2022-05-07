#include <iostream>
using namespace std;

class Employee
{
//özel method
private:
	string name;
	int age;
	int salary;
//açık method
public:
	Employee(string name, int age, int salary)
	{
		//private methoduna erişmek için;
		this->name = name;
		this->age = age;
		this->salary = salary;
	}
	/*
	friend Fonksiyon'u
	friend void showInfos(Emlpoyee employee); 
	*/
	//Friend Class'ı
	friend class Test;//Prototipini tanıttık
};

class Test
{
public:
	//Employee'nın private alanlarına erişmeyi sağlar
	static void showInfos(Employee employee)
	{
		cout << employee.name << " " << employee.age << " " << employee.salary << endl;
	}
};

//fonksiyonun gövdesi
/*void showInfos(Employee employee)
{
	cout<<employee.name << " " << employee.age << " " << employee.salary << endl;
}*/

int main()
{
	/*
	Employee employee("Esra", 21, 4000);
	showInfos(employee);
	*/
	Employee employee("Esra", 20, 4000);

	Test::showInfos(employee);
	return 0;
}
