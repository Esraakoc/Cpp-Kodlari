//Bubble sort
#include <iostream>
using namespace std;
//j. elemanla j+1. elemanın yer değiştiği kısım
void swap(int* xp, int* yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
//bubble sort
void bubbleSort(int arr[], int n)
{
	int i, j;
	for (i= 0; i < n - 1; i++)
		//son i elemanları yerinde
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				swap(&arr[j], &arr[j + 1]);
			}
		}
	}
}
//Diziyi yazdırma fonksiyonu
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
int main()
{
	int arr[] = { 64,34,25,12,22,11,90 };
	int n = sizeof(arr) / sizeof(arr[0]);
	bubbleSort(arr, n);
	cout << "Sorted array: \n";
	printArray(arr, n);
	return 0;
}
