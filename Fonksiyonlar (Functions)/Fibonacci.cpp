#include <iostream>
using namespace std;

int fibonacci(int n)
{
	int fib[50];
	fib[0] = 0;
	fib[1] = 1;
	for (int j = 2; j <= n; ++j)
	{
		fib[j] = fib[j - 1] + fib[j - 2];
	}
	return fib[n];
}
int main()
{
	int max;
	cout << "Eleman Sayisi Giriniz: ";
	cin >> max;
	for (int x = 0; x <= max; x++)
	{
		cout << "Fibonacci(" << x << ")= " << fibonacci(x) << endl;
	}
	return 0;
}
