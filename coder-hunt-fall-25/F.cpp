#include <bits/stdc++.h>
using namespace std;

int main() {
	int tt;
	cin >> tt;

	while(tt--) {
		int n;
		cin >> n;

		bool khali[n];
		for(int i = 0; i < n; i++) {
			khali[i] = true;
		}

		bool niom_follow_korche = true;

		for(int i = 0; i < n; i++) {
			int seat_location;
			cin >> seat_location;
			seat_location--;

			khali[seat_location] = false;

			if(i == 0) {
				continue;
			}

			bool left_kew_ache = false;
			bool right_kew_ache = false;

			int left_index = seat_location-1;
			int right_index = seat_location+1;

			if(left_index >= 0)
				left_kew_ache = (khali[left_index] == false);
			if(right_index < n)
				right_kew_ache = (khali[right_index] == false);

			if(!left_kew_ache && !right_kew_ache) {
				niom_follow_korche = false;
			}
		}

		if(niom_follow_korche) cout << "YES\n";
		else cout << "NO\n";
	}

	return 0;
}

// 0 0 0 1
// 0 0 1 1
// 1 1 0 1
// 1-1
// 0-1 = -1
// 0-(size-1)
// 1
// 1-1 = 0

// 1 2 3 4
// 0 1 2 3 -> index
// 2 3 1 4
// _ _ _ _
// T T T T -> khali
// T F T T -> khali


// A student can sit in a seat with index i (1 ≤ i ≤ n) only if at least one of the seats with indices i-1 or i+1 is
// occupied.

// index -> 1 2 3 4
// seats -> 0 1 0 0
// seats -> 0 1 0 1
