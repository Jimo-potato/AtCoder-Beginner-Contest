#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;
using std::pair;
using std::make_pair;
using std::min;
using std::max;
#include <string>
using std::string;

typedef long long int ll;

const int MAX_N = 10;
const int SIGMA = 26;

int n, m;
vector<int> a, b;
vector<string> s;

void solve () {
	// has[i][j][k] == 1 iff there exists s such that |s| == i, s[j] == ('a' + k)
	int has[MAX_N + 1][MAX_N][SIGMA];
	// init with 0
	for (int i = 0; i <= MAX_N; i++) {
		for (int j = 0; j < MAX_N; j++) {
			for (int k = 0; k < SIGMA; k++) {
				has[i][j][k] = 0;
			}
		}
	}
	// set 1
	for (int i = 0; i < m; i++) {
		int sz = s[i].size();
		for (int j = 0; j < sz; j++) {
			has[sz][j][s[i][j] - 'a'] = 1;
		}
	}

	vector<int> isyes(m, 0);
	// answer for each s
	for (int i = 0; i < m; i++) {
		int sz = s[i].size();
		if (sz != n) continue;

		bool isok = true;
		for (int j = 0; j < n; j++) {
			if (has[a[j]][b[j] - 1][s[i][j] - 'a'] == 0) isok = false;
		}
		if (isok) {
			isyes[i] = 1;
		}
	}

	// output
	for (int i = 0; i < m; i++) {
		cout << (isyes[i] ? "Yes" : "No") << "\n";
	}
}

int main (void) {
	std::cin.tie(nullptr);
	std::ios_base::sync_with_stdio(false);

	cin >> n;
	a.resize(n);
	b.resize(n);
	for (ll i = 0; i < n; i++) {
		cin >> a[i] >> b[i];
	}

	cin >> m;
	s.resize(m);
	for (ll i = 0; i < m; i++) {
		cin >> s[i];
	}


	solve();

	return 0;
}
