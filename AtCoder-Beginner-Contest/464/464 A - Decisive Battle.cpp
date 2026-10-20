#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    int E = 0, W = 0;
    for (int i = 0; i < size(S); i++) {
        if (S[i] == 'E') {
            E++;
        } else {
            W++;
        }
    }
    if (E > W) {
        cout << "East" << endl;
    } else {
        cout << "West" << endl;
    }
}