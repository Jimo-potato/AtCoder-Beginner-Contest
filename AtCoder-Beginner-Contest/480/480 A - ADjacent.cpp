#include <bits/stdc++.h>
using namespace std;

int main() {
    string S1, S2;
    cin >> S1 >> S2;
    string S = S1 + S2;

    bool ans = false;
    if (S[0] == 'A' || S[0] == 'D') {
        if (S[3] == 'A' || S[3] == 'D') {
            ans = true;
        }
    } else if (S[1] == 'A' || S[1] == 'D') {
        if (S[2] == 'A' || S[2] == 'D') {
            ans = true;
        }
    }
    if (!ans) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

// correct answer
#include "bits/stdc++.h"

using namespace std;
using ll=long long;

int main(){
    string S,T,ST;
    cin>>S>>T;
    ST=S+T;
    int a=ST.find('A');
    int d=ST.find('D');
    if(a%2==d%2||a/2==d/2){
        cout<<"Yes"<<"\n";
    }
    else{
        cout<<"No"<<"\n";
    }
}
