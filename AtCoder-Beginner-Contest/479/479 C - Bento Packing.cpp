#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ll n, w;
	cin >> n >> w;
	vector<ll> a(n), b(n);
	for (int i = 0; i < n; i++) cin >> a[i] >> b[i];
	ll ans = 0;
	for (int i = 0; i < 1 << n; i++) {
		ll value = 0, cost = 0;
		for (int j = 0; j < n; j++) if (i >> j & 1) value += a[j], cost += b[j];
		if (cost <= w && ans < value) ans = value;
	}
	cout << ans << '\n';
}
