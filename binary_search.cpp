// Binary search
// Time complexity: O(logn)

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

typedef vector<int> vi;

int bsearchRecursive(vi arr, int l, int r, int item) {
	if(l > r) return -1;

	int m = l + (r - l)/2;

	if(arr[m] == item) return m;
	if(arr[m] < item)  return bsearchRecursive(arr, l, m-1, item);
	else 							 return bsearchRecursive(arr, m+1, r, item);
}

int bsearchIterative(vi arr, int n, int item) {
	int l = 0;
	int r = n - 1;

	while(l <= r) {
		int m = l + (r - l)/2;

		if(arr[m] == item) return m;
		if(arr[m] < item) r = m - 1;
		else l = m + 1;
	}

	return -1;
}

int main() {
	int n, x;
	vi arr;

	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> x;
		arr.push_back(x);
	}

	cout << bsearchRecursive(arr, 0, n-1, 5) << endl;
	cout << bsearchIterative(arr, n, 5) << endl;

	return 0;
}
