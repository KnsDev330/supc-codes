#include<bits/stdc++.h>
using namespace std;

int main() {
	int tt;
	cin >>tt;

	while(tt--) {
		int keys, houses;
		cin >> keys >> houses;

		int tries = 0;
		for(int i=houses-keys; i<houses; i++) {
			tries = tries + i;
		}

		cout << tries << endl;
	}

	return 0;
}

// 100000 -> 10^5
// 1000000 -> 10^6
// n - keys
// m - houses

// - least number of tries

// 1 2
// 1
// 2
// HOUSE_1 HOUSE_2
// 

// 4 6
// 4 -> keys
// 6 -> houses

// 4th key:

// 1 2 3 4 5 6
//     x x x x
// 5+4+3+2