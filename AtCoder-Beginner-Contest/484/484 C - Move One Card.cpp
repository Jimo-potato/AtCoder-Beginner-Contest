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

// correcct answer
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> A(N), B(N);
    for (auto&& a : A) cin >> a;
    for (auto&& b : B) cin >> b;
    
    // 後ろから一致している部分を削除
    while (!A.empty() && A.back() == B.back()) {
        A.pop_back();
        B.pop_back();
    }
    
    // 反転して
    ranges::reverse(A);
    ranges::reverse(B);
    // 一致している部分を削除
    while (!A.empty() && A.back() == B.back()) {
        A.pop_back();
        B.pop_back();
    }
    
    // A == B なら
    if (A.empty()) { // Yes
        cout << "Yes" << endl;
        return 0;
    }
    
    // 左にシフトした場合と
    auto A_lshift = A;
    ranges::rotate(A_lshift, begin(A_lshift) + 1);
    if (A_lshift == B) {
        cout << "Yes" << endl;
        return 0;
    }
    
    // 右にシフトした場合を試す
    auto A_rshift = A;
    ranges::rotate(A_rshift, end(A_rshift) - 1);
    if (A_rshift == B) {
        cout << "Yes" << endl;
        return 0;
    }
    
    cout << "No" << endl;
    return 0;
}
