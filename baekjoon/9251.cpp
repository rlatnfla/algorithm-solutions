#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {

	string a1, a2;
	cin >> a1 >> a2;

	int n1 = a1.length();
	int n2 = a2.length();

	int** arr = new int* [n1 + 1];
	for (int i = 0; i <= n1; i++) {
		arr[i] = new int[n2 + 1];
	}

	for (int i = 0; i <= n1; i++) arr[i][0] = 0;
	for (int j = 0; j <= n2; j++) arr[0][j] = 0;

	for (int i = 1; i <= n1; i++) {
		for (int j = 1; j <= n2; j++) {
			if (a1[i - 1] == a2[j - 1]) {
				arr[i][j] = arr[i - 1][j - 1] + 1;
			}
			else {
				arr[i][j] = max(arr[i - 1][j], arr[i][j - 1]);
			}
		}
	}

	cout << arr[n1][n2] << '\n';

}

