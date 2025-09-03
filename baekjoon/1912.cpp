#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int n;

	cin >> n;
	int* arr = new int[n + 1];

	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
	}

	int mx = arr[1];

	for (int i = 2; i <= n; i++) {
		arr[i] = max(arr[i], arr[i] + arr[i - 1]);
		mx = max(mx, arr[i]);
	}

	cout << mx << "\n";
}

