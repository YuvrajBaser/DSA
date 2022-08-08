#include <bits/stdc++.h>
using namespace std;

// 1 2 3 4 5 6 7 8 9 10
// 1 4 9 16 25 49 64 81 100
// 10/2 = 5, take x = 8 and x = 10

// Que link
// https://practice.geeksforgeeks.org/problems/square-root/1?utm_source=youtube&utm_medium=collab_keertipurswani_description&utm_campaign=squareroot#


long long int sqrRoot(long long int x) {
	if (x == 1)return 1;

	long long l = 1, h = x / 2;
	long long ans;

	while (l <= h) {
		long long mid = l + (h - l) / 2;
		long long midsqr = mid * mid;

		if (x < midsqr) {
			h = mid - 1;
		} else if (x > midsqr) {
			l = mid + 1;
			ans = mid;
		} else {
			return mid;
		}
	}
	return ans;
}
int main()
{
	long long x;
	cin >> x;
	cout << sqrRoot(x);

	return 0;
}