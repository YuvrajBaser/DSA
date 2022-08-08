#include <bits/stdc++.h>
using namespace std;

vector<int> find(int arr[], int n , int x )
{
	// code here
	int l = 0, h = n - 1;
	int first = -1, last = -1;

	// finding first
	while (l <= h) {
		int mid = l + (h - l) / 2;
		if (x < arr[mid]) {
			h = mid - 1;
		} else if (x > arr[mid]) {
			l = mid + 1;
		} else {
			first = mid;
			h = mid - 1;
		}
	}
	l = 0, h = n - 1;

	// finding last
	while (l <= h) {
		int mid = l + (h - l) / 2;
		if (x < arr[mid]) {
			h = mid - 1;
		} else if (x > arr[mid]) {
			l = mid + 1;
		} else {
			last = mid;
			l = mid + 1;
		}
	}
	return {first, last};
}

int main()
{

	int t;
	cin >> t;
	while (t--)
	{
		int n, x;
		cin >> n >> x;
		int arr[n], i;
		for (i = 0; i < n; i++)
			cin >> arr[i];
		vector<int> ans;
		ans = find(arr, n, x);
		cout << ans[0] << " " << ans[1] << endl;
	}

	return 0;
}