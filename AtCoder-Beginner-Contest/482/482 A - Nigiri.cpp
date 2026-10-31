#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    int count = 0;
    for (int i = 0; i < size(S); i++) {
        if (S[i] == 'o') {
            count++;
        }
    }
    if (count % 2 == 0) {
        cout << "even" << endl;
    } else {
        cout << "odd" << endl;
    }
}