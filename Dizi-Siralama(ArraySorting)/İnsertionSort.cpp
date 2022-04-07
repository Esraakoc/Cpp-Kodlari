//insertion Sort
#include <iostream>
using namespace std;
//insertion sort kullanarak diziyi sıralama fonksiyonu
void insertionSort(int arr[], int n)
{
	int i, key, j;
	for (i = 0; i < n; i++)
	{
		key = arr[i];
		j = i - 1;
		/*arr[0..i-1] in anahtardan büyük olan elemanların
		mevcut konumlarının bir ilerisine taşıyın*/
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
}
//n boyutunda diziyi yazdırmak için yardımcı fonksiyon
void printArray(int arr[], int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
int main()
{
	int arr[] = { 30,62,53,42,17,97,91,38 };
	int n = sizeof(arr) / sizeof(arr[0]);
	insertionSort(arr, n);
	printArray(arr, n);
	return 0;
}
