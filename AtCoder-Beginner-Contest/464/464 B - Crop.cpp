#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W;
    cin >> H >> W;

    vector<string> C(H);
    for (int i = 0; i < H; i++) cin >> C[i];

    int u = H, d = -1;
    int l = W, r = -1;

    for (int i = 0; i < H; i++) for (int j = 0; j < W; j++) {
        if (C[i][j] == '#') {
            u = min(u, i); d = max(d, i);
            l = min(l, j); r = max(r, j);
        }
    }

    for (int i = u; i <= d; i++) {
        for (int j = l; j <= r; j++) {
            cout << C[i][j];
        }
        cout << endl;
    }

    return 0;
}
