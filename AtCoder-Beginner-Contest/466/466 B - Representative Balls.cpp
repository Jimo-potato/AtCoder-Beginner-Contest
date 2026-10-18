#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> ColorMax(M, -1);
    for (int i = 0; i < N; i++) {
        int C, S;
        cin >> C >> S;
        C--;
        ColorMax[C] = max(ColorMax[C], S);
    }
    for (int i = 0; i < M; i++) {
        cout << ColorMax[i] << " ";
    }
}