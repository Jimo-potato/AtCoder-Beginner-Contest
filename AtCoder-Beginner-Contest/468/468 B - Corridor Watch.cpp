#include <bits/stdc++.h>
using namespace std;

int main() {
    int M, D;
    cin >> M >> D;
    string S;
    cin >> S;
    
    vector<int> A(M, 0);
    for (int i = 0; i < M; i++) {
        if (S[i] == 'G') {
            for (int j = 0; j <= D; j++) {
                if (i + j < M) {
                    A[i + j] = 1;
                }
                if (i - j >= 0) {
                    A[i - j] = 1;
                }
            }
        }
    }
    int count = 0;
    for (int i = 0; i < M; i++) {
        if (A[i] == 0) {
            count++;
        }
    }
    cout << count << endl;
}

// correct answer
#include <bits/stdc++.h>
using namespace std;

int main() {
    int M, D;
    cin >> M >> D;

    string S;
    cin >> S;

    vector<int> diff(M + 1, 0);

    for (int i = 0; i < M; i++) {
        if (S[i] == 'G') {
            int L = max(0, i - D);
            int R = min(M - 1, i + D);

            diff[L]++;
            if (R + 1 < M) diff[R + 1]--;
        }
    }

    int cur = 0;
    int ans = 0;

    for (int i = 0; i < M; i++) {
        cur += diff[i];

        if (cur == 0) ans++;
    }

    cout << ans << endl;
}