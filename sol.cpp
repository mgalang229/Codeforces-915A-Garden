#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, k;
	cin >> n >> k;
	// find the largest number that divides 'k'
	int factor = 0;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if (k % x == 0) {
			factor = max(factor, x);
		}
	}
	cout << k / factor << '\n';
	return 0;
}
