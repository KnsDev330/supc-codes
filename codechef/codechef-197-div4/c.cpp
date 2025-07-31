#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int tc;
	cin >> tc;
	while(tc--) { // if(3) -> T -> 2 -> if(2) -> T -> 1 -> if(1) -> T -> 0 -> if(0) -> F
		int n;
		cin >> n;

		int odd_count=0;
		int a[n];
		for(int i=0; i<n; i++) {
			cin >> a[i];

			if(a[i] %2!=0) {
				odd_count++;
			}
		}

		cout << ((odd_count == 1) ? "Yes" : "No") << endl;
	}

}

// N = 6
// 1 2 3 4 5 6

// 1 = 1
// 1 2 = 3
// 1 2 3 = 6
// 1 2 3 4 = 10
// 1 2 3 4 5 = 15
// 1 2 3 4 5 6 = 21

// 3 4 1 2
// 1 = 1
// 1 2 = 3
// 1 2 3 = 6
// 1 2 3 4 = 7
// 
// 
// 