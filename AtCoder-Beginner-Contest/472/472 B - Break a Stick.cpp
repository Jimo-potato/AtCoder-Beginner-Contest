#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    int sum = 0;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
        sum += A[i];
    }
    int left = 0, right = 0;
    int min_diff = INT_MAX;
    for (int i = 0; i < N; i++) {
        left += A[i];
        right = sum - left;
        if (abs(left - right) < min_diff) {
            min_diff = abs(left - right);
        }
    }
    cout << min_diff << endl;
}