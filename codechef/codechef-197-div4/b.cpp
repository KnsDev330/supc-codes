#include<bits/stdc++.h>
using namespace std;

int main() {
	int T;
	cin >> T;

	for(int NOW_TEST=0; NOW_TEST<T; NOW_TEST++) {




		// START
		int n, x, y;
		cin >> n >> x >> y;

		int arr[n];
		for(int i = 0; i < n; i++) {
			cin >> arr[i];
		}

		int result = 0;

		for(int i = 0; i < n; i++) {
			int weight = arr[i];

			if(weight >= x && weight <= y) {
				result++;
			}
		}

		cout << result << endl;
		// END
		
		
		
	}	

	return 0;
}



/* 

3
4 7 10
6 8 10 11
5 6 16
6 16 16 9 9
1 7 10
16 

*/