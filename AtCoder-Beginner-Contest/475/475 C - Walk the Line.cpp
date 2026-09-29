#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, S;
    cin >> N >> S;
    S--;
    long long L;
    cin >> L;
    vector<int> A(N - 1);
    for (int i = 0; i < N - 1; i++) {
        cin >> A[i];
    }

    vector<int> towns(N, 0);
    towns[S]++;
    int ans = 1;
    long long length = 0;
    long long left, right;

        if (S == 0) {
            left = 1000000000;
            right = A[S];
        } else if (S == N - 1) {
            left = A[S - 1];
            right = 1000000000;
        } else {
            left = A[S - 1];
            right = A[S];
        }

    while (length <= L) {
        if (left < right) {
            if (length + left <= L) {
                length += left;
                S--;
                if (S == 0) {
                    left = 1000000000;
                } else {
                    left = A[S - 1];
                }
                right += A[S];
                if (towns[S] == 0) {
                    towns[S]++;
                    ans++;
                }
                cout << S << ' ';
            } else {
                break;
            }
        } else {           
            if (length + right <= L) {
                length += right;
                S++;
                if (S == N - 1) {
                    right = 1000000000;
                } else {
                    right = A[S];
                }
                left += A[S - 1];
                if (towns[S] == 0) {
                    towns[S]++;
                    ans++;
                }
                cout << S << ' ';
            } else {
                break;
            }
        }
    }
    cout << ans << endl;
}

// correct answer
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ll n, s, L;
	cin >> n >> s >> L;
	s--;
	vector<ll> a(n - 1);
	for (auto& e : a) cin >> e;
	int ans = 1;
	vector<ll> p(n);
	for (int i = 0; i < n - 1; i++) p[i + 1] = p[i] + a[i];
	for (int l = 0; l <= s; l++) {
		for (int r = s; r < n; r++) {
			ll x = p[s] - p[l], y = p[r] - p[s];
			if (min(2 * x + y, x + 2 * y) <= L) ans = max(ans, r - l + 1);
		}
	}
	cout << ans << '\n';
}
