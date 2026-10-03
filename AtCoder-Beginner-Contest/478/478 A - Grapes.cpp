#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(N, 0);
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }
    while (M > 0) {
        for (int i = 0; i < N; i++) {
            if (M > 0) {
                A[i]++;
                M--;
            }
        }
    }
    for (int i = 0; i < N; i++) {
        cout << A[i] << endl;
    }
}