// Maximum sub array sum
// Time complexity: O(n)

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

typedef vector<int> vi;

// Kadane’s algorithm
// Calculate the maximum sub array till current index at each index: sum = max(arr[i], arr[1] + sum).
// Take the max value of sum of all indices.
int kadane(vi arr, int n) {
	int sum = arr[0], best = arr[0];

	for(int i=1; i<n; i++) {
		sum = max(arr[i], arr[i] + sum);
		best = max(best, sum);
	}

	return best;
}

int main() {
	int n, x;
	vi arr;

	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> x;
		arr.push_back(x);
	}

	cout << kadane(arr, n) << endl;

	return 0;
}
