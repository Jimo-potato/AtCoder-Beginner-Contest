#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    bool found = false;
    for (int i = 0; i < N; i++) {
        int X;
        cin >> X;
        if (X >= 0) {
            found = true;
        }
    }
    if (found) {
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }
    return 0;
}