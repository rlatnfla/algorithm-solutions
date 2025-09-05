#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {

	int N, K;
	cin >> N >> K;

	int* W = new int[N + 1];
	int* V = new int[N + 1];

	for (int i = 1; i <= N; i++) {
		cin >> W[i] >> V[i];
	}

	int** dp = new int* [N + 1];
	for (int i = 0; i <= N; i++) {
		dp[i] = new int[K + 1];
	}

	for (int i = 0; i <= N; i++) {
		dp[i][0] = 0;
	}

	for (int i = 0; i <= K; i++) {
		dp[0][i] = 0;
	}


	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= K; j++) {

			if (j < W[i]) {
				dp[i][j] = dp[i - 1][j];
			}
			else {
				dp[i][j] = max(dp[i - 1][j], V[i] + dp[i - 1][j - W[i]]);
			}
		}
	}

	cout << dp[N][K] << '\n';

}

