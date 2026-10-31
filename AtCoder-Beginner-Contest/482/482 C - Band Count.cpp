#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W, N, Q;
    cin >> H >> W >> N >> Q;
    vector<vector<int>> A(H + 1, vector<int>(W + 1, 0));
    for (int i = 0; i < N; i++) {
        int R, C;
        cin >> R >> C;
        R--;
        C--;
        A[R][C]++;
    }
    vector<vector<int>> S(H + 1, vector<int>(W + 1, 0));
    for (int i = 0; i < H; i++) {
        for (int j = 0; j < W; j++) {
            S[i + 1][j + 1] = S[i][j + 1] + S[i + 1][j] - S[i][j] + A[i][j];
        }
    }
    for (int i = 0; i < Q; i++) {
        int number, a, b;
        cin >> number >> a >> b;
        if (number == 1) {
            cout << S[b][W] - S[a - 1][W] << endl;
        } else {
            cout << S[H][b] - S[H][a - 1] << endl;
        }
    }
}

// correct answer
#include <bits/stdc++.h>
using namespace std;

int main() {
    int H, W, N, Q;
    cin >> H >> W >> N >> Q;

    vector<int> A, B;

    for (int i = 0; i < N; i++) {
        int r, c;
        cin >> r >> c;
        A.push_back(r);
        B.push_back(c);
    }

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    for (int i = 0; i < Q; i++) {
        int cmd, l, r;
        cin >> cmd >> l >> r;

        if (cmd == 1) {
            cout << upper_bound(A.begin(), A.end(), r)
                    - lower_bound(A.begin(), A.end(), l)
                 << '\n';
        } else {
            cout << upper_bound(B.begin(), B.end(), r)
                    - lower_bound(B.begin(), B.end(), l)
                 << '\n';
        }
    }

    return 0;
}