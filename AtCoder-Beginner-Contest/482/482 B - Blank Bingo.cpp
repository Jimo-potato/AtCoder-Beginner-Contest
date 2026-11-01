#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> bingo(5);
    for (int i = 0; i < 5; i++) {
        string S;
        cin >> S;
        bingo[i] = S;
    }
    int ans = 5;
    int count = 0;
    int i = 0, j = 0;
    while (i < 5) {
        if (bingo[i][j] == '.') {
            count++;
        }
        i++;
        j++;
    }
    ans = min(ans, count);

    count = 0, i = 4, j = 0;
    while (i > -1) {
        if (bingo[i][j] == '.') {
            count++;
        }
        i--;
        j++;
    }
    ans = min(ans, count);

    for (i = 0; i < 5; i++) {
        count = 0;
        for (j = 0; j < 5; j++) {
            if (bingo[i][j] == '.') {
                count++;
            }
        }
        ans = min(ans, count);
    }

    for (i = 0; i < 5; i++) {
        count = 0;
        for (j = 0; j < 5; j++) {
            if (bingo[j][i] == '.') {
                count++;
            }
        }
        ans = min(ans, count);
    }

    cout << ans << endl;
}

// correct answer
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<string> S(5);
    for (auto& s : S) cin >> s;

    int ans = 5;
    // 横
    for (int k = 0; k < 5; k++) {
        int count = 0;
        for (int i = 0; i < 5; i++)
            if (S[k][i] == '.') count++;
        ans = min(ans, count);
    }
    // 縦
    for (int k = 0; k < 5; k++) {
        int count = 0;
        for (int i = 0; i < 5; i++)
            if (S[i][k] == '.') count++;
        ans = min(ans, count);
    }
    // 斜め
    {
        int count = 0;
        for (int i = 0; i < 5; i++)
            if (S[i][i] == '.') count++;
        ans = min(ans, count);
    }
    {
        int count = 0;
        for (int i = 0; i < 5; i++)
            if (S[i][4 - i] == '.') count++;
        ans = min(ans, count);
    }
    cout << ans << "\n";
}
