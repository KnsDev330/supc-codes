#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	if(n <= 15) {
		cout << 15-n << endl;
	}
	else {
		cout << -1 << endl;
	}

	return 0;
}