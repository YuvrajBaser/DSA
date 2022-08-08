#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n, int x) {
	int l = 0, h = n - 1;
	while (l <= h) {
		int mid = l + (h - l) / 2;
		if (x == arr[mid])
		{
			cout << mid;
			break;
		}

		if (x < arr[mid])
		{
			h = mid - 1;

		} else {
			l = mid + 1;
		}
	}
	return 0;
}

int main()
{
	int arr[] = {1, 2, 3, 4, 5};
	int n = 5;
	int x = 5;

	binarySearch(arr, n, x);

	// Another way is by using binary search stl function
	// binary_search(startAddress, endAddress, valueToFind)
	cout << endl << endl << binary_search(arr, arr + n, x); // it return true or false

	cout << endl << lower_bound(arr, arr + n, x) - arr;// returns >= value

	cout << endl << upper_bound(arr, arr + n, x) - arr;// returns > value

	return 0;
}