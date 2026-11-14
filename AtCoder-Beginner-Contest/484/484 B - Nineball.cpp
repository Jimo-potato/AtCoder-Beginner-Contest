#include <bits/stdc++.h>
using namespace std;

int main() {
    int K;
    cin >> K;
    int target, a;
    bool foundNine = false;
    for (int i = 0; i < K; i++) {
        cin >> a;
        if (a == 9) {
            foundNine = true;
        }
        if (i == 0) {
            target = a;
        } else {
            target = min(target, a);
        }
    }
    if (foundNine) {
        cout << target << endl;
    } else {
        cout << "-1" << endl;
    }
}