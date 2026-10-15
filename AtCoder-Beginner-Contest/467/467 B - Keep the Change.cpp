#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    int X = 10000, Y = 10000;
    for (int i = 0; i < N; i++) {
        int A, B;
        cin >> A >> B;
        string S;
        cin >> S;
        if (S == "keep") {
            X -= B;
        } else {
            X -= A;
        }
        Y -= A;
    }
    cout << Y - X << endl;
}