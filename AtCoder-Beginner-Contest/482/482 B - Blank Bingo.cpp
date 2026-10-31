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