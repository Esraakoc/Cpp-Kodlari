//Recursive Binary Search
#include <iostream>
using namespace std;
//verilen arr[l..r] dizisindeki x in konumu,yoksa -1 dondurur
int binarySearch(int arr[], int l, int r, int x)
{
	if (r >= l)
	{
		int mid = l + (r - l) / 2;
		//eleman ortada bulunuyorsa
		if(arr[mid] == x)
			return mid;
		//Eğer eleman ortadaki sayıdan daha küçükse
		//sadece sol alt dizide bulunabilir
		if (arr[mid] > x)
			return binarySearch(arr, l, mid - 1, x);
		//aksi takdirde sadece sağ alt dizide bulunabilir
		return binarySearch(arr, mid + 1, r, x);

	}
	return -1;
}
int main(void)
{
	int arr[] = { 2,3,4,10,40 };
	int x = 10;
	int n = sizeof(arr) / sizeof(arr[0]);
	int result = binarySearch(arr, 0, n - 1, x);
	(result == -1)
		? cout << "Eleman dizide mevcut degil. \n"
		: cout << "Elemanin bulundugu index " << result << endl;
	return 0;
}