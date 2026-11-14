#include <bits/stdc++.h>
using namespace std;

int main() {
    int B, R;
    cin >> B >> R;
    int ansTate = 30 - B;
    int ansYoko = 30 - R;
    cout << ansTate * ansYoko << endl;
}