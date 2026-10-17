#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K, T;
    cin >> N >> K >> T;
    vector<int> flow(T, 0);

    for (int i = 0; i < N; i++) {
        int A;
        cin >> A;
        flow[A] = 1;
        flow[A + K] = -1;
    }
    
    int i = 0;
    int ans = 0;
    while (i < T) {

    }
    cout << ans << endl;
}

// correct answer
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    long long K, T;
    cin >> N >> K >> T;

    vector<long long> A(N);
    vector<long long> xs;

    xs.push_back(0);
    xs.push_back(T);

    for (int i = 0; i < N; i++) {
        cin >> A[i];

        if (A[i] <= T) xs.push_back(A[i]);
        if (A[i] + K <= T) xs.push_back(A[i] + K);
        else xs.push_back(T);
    }

    sort(xs.begin(), xs.end());
    xs.erase(unique(xs.begin(), xs.end()), xs.end());

    vector<int> flow(xs.size() + 1, 0);

    for (int i = 0; i < N; i++) {
        long long l = A[i];
        long long r = min(A[i] + K, T);

        int li = lower_bound(xs.begin(), xs.end(), l) - xs.begin();
        int ri = lower_bound(xs.begin(), xs.end(), r) - xs.begin();

        flow[li]++;
        flow[ri]--;
    }

    for (int i = 1; i < (int)xs.size(); i++) {
        flow[i] += flow[i - 1];
    }

    long long ans = 0;

    for (int i = 0; i + 1 < (int)xs.size(); i++) {
        if (flow[i] == 0) {
            long long d = xs[i + 1] - xs[i];
            ans += (d + K - 1) / K;
        }
    }

    cout << ans << endl;
}