#include <iostream>
using std::cin;
using std::cout;
#include <vector>
using std::vector;
using std::pair;
using std::make_pair;

int main (void) {
	std::cin.tie(nullptr);
	std::ios_base::sync_with_stdio(false);

	int m, d;
	cin >> m >> d;

	vector<pair<int, int> > gosekkulist = {
		{1,7},
		{3,3},
		{5,5},
		{7,7},
		{9,9}
	};
	bool isgosekku = false;
	for (const pair<int,int> &date : gosekkulist) {
		if (make_pair(m,d) == date) isgosekku = true;
	}

	if (isgosekku) {
		cout << "Yes" << "\n";
	} else {
		cout << "No"  << "\n";
	}

	return 0;
}
