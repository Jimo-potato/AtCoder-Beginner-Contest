#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> Candidates(N, 0);
    for (int i = 0; i < M; i++) {
        int A, B;
        cin >> A >> B;
        A--;
        B--;
        Candidates[A]++;
        Candidates[B]++;
    }
    int maxNum = -1, maxSecondNum = -1;
    vector<int> d(2);
    for (int i = 0; i < N; i++) {
        cout << Candidates[i] << " ";
        d.push_back(Candidates[i]);
        sort(d.rbegin(), d.rend());
        d.pop_back();
        if (Candidates[i] > d[0]) {
            if (maxNum != 0) {
                maxSecondNum = maxNum;
            }
            maxNum = i;
        } else if (Candidates[i] > d[1]) {
            maxSecondNum = i;
        }
    }
    for (int i = 0; i < N; i++) {
        if (i == maxNum) {
            cout << maxSecondNum + 1 << endl;
        } else {
            cout << maxNum + 1 << endl;
        }
    }
}

// correct answer
#include <bits/stdc++.h>
using namespace std;

#define N (int)2e+5

int main(void){
	int n,m,x,y;
	pair<int,int> c1={N,-1},c2={N,-1}; //candidate,received vote
	vector<int>a[N];
	int b[N]={};

	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>x>>y;
		a[x-1].push_back(y-1);
		b[x-1]++;
	}

	for(int i=0;i<n;i++){
		if(b[i]>c1.second){c2=c1; c1={i,b[i]};}
		else if(b[i]>c2.second)c2={i,b[i]};
	}

	for(int i=0;i<n;i++){
		int sz=a[i].size();
		for(int j=0;j<sz;j++)b[a[i][j]]++;
		b[i]=0;

		pair<int,int> c0={N,-1};
		for(int j=0;j<sz+2;j++){
			if(j<sz)x=a[i][j];
			else if(j==sz)x=c1.first;
			else x=c2.first;
			if(b[x]>c0.second)c0={x,b[x]};
			else if((b[x]==c0.second)&&(x<c0.first))c0={x,b[x]};
		}
		cout<<(c0.first+1)<<endl;


		b[i]=sz;
		for(int j=0;j<sz;j++)b[a[i][j]]--;
	}
	return 0;
}
