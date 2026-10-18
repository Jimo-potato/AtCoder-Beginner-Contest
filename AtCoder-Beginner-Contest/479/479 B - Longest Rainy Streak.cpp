#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;
    int max_R = 0;
    int current_R = 0;
    for (int i = 0; i < N; i++) {
        if (S[i] == 'R') {
            current_R++;
            max_R = max(max_R, current_R);
        } else {
            current_R = 0;
        }
    }
    cout << max_R << endl;
}