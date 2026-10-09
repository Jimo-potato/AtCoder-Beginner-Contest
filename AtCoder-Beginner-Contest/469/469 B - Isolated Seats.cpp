#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;
    int count = 0;
    for (int i = 0; i < N; i++) {
        if (N == 1) {
            if (S[i] == 'x') {
                count++;
            }
        } else {
            if (i == 0) {
             if (S[i] == 'x' && S[i + 1] == 'x') {
                    count++;
             }
         } else if (i == N - 1) {
                if (S[i] == 'x' && S[i - 1] == 'x') {
                    count++;
             }
         } else {
                if (S[i] == 'x' && S[i - 1] == 'x' && S[i + 1] == 'x') {
                    count++;
             }
         }
     }
    }
    cout << count << endl;
}