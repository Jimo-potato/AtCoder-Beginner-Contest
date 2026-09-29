#include <iostream>
using std::cin;
using std::cout;
using std::cerr;
using std::endl;
#include <vector>
using std::vector;
using std::pair;
#include <map>
using std::map;
using std::max;
using std::min;


#ifdef DEBUG
const int debug = 1;
#else
const int debug = 0;
#endif

using ll = int64_t;
using P = pair<ll, ll>;

const ll FOD = 998244353;
#include <atcoder/modint>
using mint = atcoder::modint998244353;
#include <atcoder/convolution>
using atcoder::convolution;

ll n, m, k;
ll x, y;
vector<ll> a, b;

inline void output (const ll x) {
	cout << x << "\n";
}

vector<ll> accum (const vector<ll> &a) {
	ll sz = (ll)a.size();
	vector<ll> b(sz+1, 0);
	b[0] = 0;
	for (ll i = 0; i < sz; i++) {
		b[i+1] = b[i] + a[i];
	}
	return b;
}

void solve() {
	sort(a.begin(), a.end());
	sort(b.begin(), b.end());

	vector<ll> bk(m);
	for (ll i = 0; i < m; i++) {
		bk[i] = (b[i] - 1) / k + 1;
	}

	vector<ll> ac = accum(a);
	vector<ll> bc = accum(b);
	vector<ll> bkc = accum(bk);

	ll ans = 0;
	for (ll ri = 0; ri <= m; ri++) {
		ll s = (x+y*k) - bc[ri];
		ll sk = y - bkc[ri];
		if (s < 0 || sk < 0) break;

		ll li = ([&]() -> ll {
			ll ok = 0, ng = n+1;
			while (ok + 1 < ng) {
				ll med = (ok + ng) / 2;
				if (ac[med] <= s) {
					ok = med;
				} else {
					ng = med;
				}
			}
			return ok;
		})();

		ans = max(ans, li + ri);
	}

	output(ans);


	return;
}

int main (void) {
	std::cin.tie(nullptr);
	std::ios_base::sync_with_stdio(false);

	cin >> n >> m >> k;
	cin >> x >> y;
	a.resize(n);
	b.resize(m);
	for (ll i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (ll i = 0; i < m; i++) {
		cin >> b[i];
	}

	
	solve();

	return 0;
}
