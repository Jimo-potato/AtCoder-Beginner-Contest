#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    int odd_sum = 0;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        if (i % 2 == 0) {
            odd_sum += A[i];
        }
    }
    cout << odd_sum << endl;
}