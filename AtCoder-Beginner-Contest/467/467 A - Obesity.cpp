#include <bits/stdc++.h>
using namespace std;

int main() {
    double H, W;
    cin >> H >> W;
    if (W / (H / 100) / (H / 100) >= 25) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}

// correct answer
#include <bits/stdc++.h>
using namespace std;

int main(){
    int H,W;
    cin>>H>>W;
    string ans;
    if(400*W>=H*H){
        ans="Yes";
    }
    else{
        ans="No";
    }
    cout<<ans<<"\n";
}
