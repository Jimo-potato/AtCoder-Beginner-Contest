#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, a, b;
    cin >> N;
    vector<long long> A(N + 1, 0), B(N + 1, 0);
    for (int i = 0; i < N; i++) {
        cin >> a;
        A[i + 1] = A[i] + a;
    }
    for (int i = 0; i < N; i++) {
        cin >> b;
        B[i + 1] = B[i] + b;
    }
    if (A[N] != B[N]) {
        cout << "No" << endl;
        return 0;
    }
    bool ans = true;
    int diffCount = 0;
    int ookii;
    bool Adekai = false, Bdekai = false;
    for (int i = 0; i < N - 1; i++) {
        if (A[i] != B[i]) {
            diffCount++;
            if (diffCount == 1) {
                if (A[i] > B[i]) {
                    ookii = A[i] - A[i - 1];
                    Adekai = true;
                } else {
                    ookii = B[i] - B[i - 1];
                    Bdekai = true;
                }
            } else if (diffCount > 1) {
                if (Adekai) {
                    if (A[i + 1] - ookii != B[i] && B[i] != ookii) {
                        ans = false;
                        break;
                    }
                } else if (Bdekai) {
                    if (B[i + 1] - ookii != A[i] && A[i] != ookii && A[i] + i != B[i] && B[i] + i != A[i]) {
                        ans = false;
                        break;
                    }
                } else if (ookii == A[i] || ookii == B[i]) {
                    diffCount = -1;
                }
            } else if (diffCount == -1) {
                ans = false;
                break;
            }
        }
    }

    if (ans) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
