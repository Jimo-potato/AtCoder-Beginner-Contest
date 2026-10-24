#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<int> A(N);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    int i = 0;
    int ans = 0;
    while (i < N - 1) {
        if (A[i] == K) {
            ans++;
        } else if (A[i] < K && K < A[i + 1]) {
            ans++;
        } else if (A[i + 1] < K && A[i] > K) {
            ans++;
        }
        i++;
    }
    if (A[N - 1] == K) {
        ans++;
    }
    cout << ans << endl;
}