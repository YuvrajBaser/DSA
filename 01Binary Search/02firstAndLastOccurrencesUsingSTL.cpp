// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
vector<int> find(int arr[], int n , int x )
{
	// code here
	int first = -1, last = -1;
	if (!binary_search(arr, arr + n, x)) {
		return { -1, -1};
	}
	first = lower_bound(arr, arr + n, x) - arr;
	last = upper_bound(arr, arr + n, x) - arr - 1;
	return {first, last};


	// Binary Search STL functions

	vector<int> v = {1, 2, 3, 4, 5};

	// Binary Search - returns true or false
	cout << binary_search(v.begin(), v.end(), 4) << endl;
	cout << binary_search(v.begin(), v.begin() + 3, 4) << endl;
	cout << binary_search(v.begin(), v.begin() + 4, 4) << endl << endl;

	// Lower Bound - returns >= index
	cout << lower_bound(v.begin(), v.end(), 4) - v.begin() << endl;
	cout << lower_bound(v.begin(), v.begin() + 3, 4) - v.begin() << endl;
	cout << lower_bound(v.begin(), v.begin() + 4, 4) - v.begin() << endl << endl;

	// Upper Bound -returns > index
	cout << upper_bound(v.begin(), v.end(), 4) - v.begin() << endl;
	cout << lower_bound(v.begin(), v.end(), 4) - v.begin() << endl;

	// Que link
	// https://practice.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/1/?page=1&difficulty[]=-1&category[]=Binary+Search&sortBy=submissions&utm_source=youtube&utm_medium=collab_codefromscratch_description&utm_campaign=lastoccurrenceofx#

}

// { Driver Code Starts.

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


// } Driver Code Ends