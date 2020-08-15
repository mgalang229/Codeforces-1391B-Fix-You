#include <bits/stdc++.h>

using namespace std;

void test_case() {
	int n, m;
	cin >> n >> m;
	char a[n][m];
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < m; ++j) {
			cin >> a[i][j];
		}
	}
	int r = 0, d = 0;
	for(int i = 0; i < n; ++i) {
		for(int j = 0; j < m; ++j) {
			if(j == m - 1) {
				if(a[i][j] == 'R') {
					r++;
				}
			}
			if(i == n - 1) {
				if(a[i][j] == 'D') {
					d++;
				}
			}
		}
	}
	cout << r + d << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	for(int nr = 1; nr <= T; ++nr) {
		test_case();
	}
	//test_case();
	return 0;
}
