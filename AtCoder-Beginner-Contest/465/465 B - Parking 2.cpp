#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, Y, L, R, A, B;
    cin >> X >> Y >> L >> R >> A >> B;
    int fee = 0;
    for (int i = A; i < B; i++) {
        if (i >= L && i < R) {
            fee += X;
        } else {
            fee += Y;
        }
    }
    cout << fee << endl;
}