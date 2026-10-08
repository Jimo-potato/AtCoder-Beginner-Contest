#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N, 0);
    for (int i = 0; i < N; i++) {
        int C;
        cin >> C;
        C--;
        A[C]++;
    }
    int max_count = 0;
    for (int i = 0; i < N; i++) {
        max_count = max(max_count, A[i]);
    }
    cout << N - max_count << endl;
}