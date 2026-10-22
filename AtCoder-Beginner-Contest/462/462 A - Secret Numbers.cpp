#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;
    string ans = "";
    for (char c : S) {
        if (isdigit(c)) {
            ans += c;
        }
    }
    cout << ans << endl;
}