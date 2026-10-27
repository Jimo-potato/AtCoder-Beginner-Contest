#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    char X;
    cin >> X;
    vector<int> ansbox(5, 0);
    for (int i = 0; i < N; i++) {
        string S;
        cin >> S;
        for (int j = 0; j < 5; j++) {
            if (S[j] == 'o') {
                ansbox[j] = 1;
            }
        }
    }
    int point;
    if (X == 'A') {
        point = 0;
    } else if (X == 'B') {
        point = 1;
    } else if (X == 'C') {
        point = 2;
    } else if (X == 'D') {
        point = 3;
    } else {
        point = 4;
    }
    if (ansbox[point] == 1) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

// correct answer
#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    char X;
    cin >> N >> X;
    vector<string> S(N);
    for (int i = 0; i < N; i++) cin >> S[i];
    
    bool ans = false;
    for (int i = 0; i < N; i++) ans |= S[i][X - 'A'] == 'o';
    if (ans) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}
