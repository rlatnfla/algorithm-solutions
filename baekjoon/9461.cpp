#include <iostream>
using namespace std;

int main() {
	int N;
	int T;

	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> N;

		if (N == 1 || N == 2 || N == 3) {
			cout << 1 << "\n";
			continue;
		}
		else if (N == 4 || N == 5) {
			cout << 2 << "\n";
			continue;
		}

		long long* arr = new long long[N + 1];
		arr[1] = 1;
		arr[2] = 1;
		arr[3] = 1;
		arr[4] = 2;
		arr[5] = 2;

		for (int j = 6; j <= N; j++) {
			arr[j] = arr[j - 1] + arr[j - 5];
		}
		cout << arr[N] << "\n";

	}
}

