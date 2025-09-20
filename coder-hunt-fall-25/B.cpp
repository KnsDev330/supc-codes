#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;

	int picked = 0;
	
	while(n--) {
		int bulbul, nadir, arif;
		cin >> bulbul >> nadir >> arif;

		if(bulbul+nadir+arif > 1) picked++;
	}

	cout << picked << endl;

	return 0;
}


// Y/N
// 3
// 1 1 0 -> picked
// 1 1 1 -> picked
// 1 0 0 -> not picked

// 1 0 0
// 0 1 1

// they would only pick a problem if at least two of them were confident about the solution