#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int n = S.size();
  if (S[n-1] == 'e') {
    cout << S << 'r' << endl;
  } else {
    cout << S << "er" << endl;
  }
}

// correct answer
#include <iostream>
using std::cin;
using std::cout;
#include <string>
using std::string;


int main (void) {
	string s;
	cin >> s;

	string t;
	if (s.back() == 'e') {
		t = s + "r";
	} else {
		t = s + "er";
	}

	cout << t << "\n";


	return 0;
}
