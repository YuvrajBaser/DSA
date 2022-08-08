//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

int Search(vector<int> , int );

int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> vec(n);

        for (int i = 0; i < n; i++)
            cin >> vec[i];

        int target;
        cin >> target;

        cout << Search(vec, target) << "\n";

    }
}
// } Driver Code Ends


//User function template for C++

// vec : given vector of elements
// K : given value whose index we need to find
int Search(vector<int> vec, int K) {
    //code here

    int l = 0, h = vec.size() - 1, mid;

    while (l <= h) {
        mid = l + (h - l) / 2;

        if (K == vec[mid]) return mid;

        if (vec[l] <= vec[mid]) { // Left side is sorted
            if (vec[l] <= K && K < vec[mid]) {
                h = mid - 1;
            } else {
                l = mid + 1;
            }
        } else { // Right side is sorted
            if (vec[mid] < K && K <= vec[h]) {
                l = mid + 1;
            } else {
                h = mid - 1;
            }
        }
    }
    return -1;
}