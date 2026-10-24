#include <bits/stdc++.h>
using namespace std;

int main() {
    int Q;
    cin >> Q;
    map<string, int> A;
    int order = 1;
    for (int i = 0; i < Q; i++) {
        string S;
        cin >> S;
        if(A.find(S) != A.end()) {
            cout << A[S] << endl;
        } else {
            A[S] = order;
            cout << order << endl;
            order++;
        }
    }
}