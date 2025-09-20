#include <bits/stdc++.h>
using namespace std;

class Person {
	public:
		string name;
		int date, month, year;

		Person() {}
		Person(string n, int d, int m, int y) {
			name  = n;
			date  = d;
			month = m;
			year  = y;
		}
};

// RETURN_TYPE FUNCTION_NAME (INPUTS) {
// 	// kaj kora hoi
// 	// return VALUE
// }

// p1 = Tom 15 8 1993
// p2 = Jerry 18 9 1990
bool compare(Person p1, Person p2) {
	// year
	if(p1.year < p2.year) return false;
	if(p1.year > p2.year) return true;

	// month
	if(p1.month < p2.month) return false;
	if(p1.month > p2.month) return true;

	// date
	if(p1.date < p2.date) return false;
	if(p1.date > p2.date) return true;

	// will not reach this point
	return true;
}

int main() {
	int n;
	cin >> n;

	Person arr[n];

	for(int i=0; i<n; i++) {
		string name;
		int day, month, year;
		cin >> name >> day >> month >> year;

		Person participant = Person(name, day, month, year);
		arr[i] = participant;
	}

	sort(arr, arr+n, compare);

	cout << arr[0].name << endl;
	cout << arr[n-1].name << endl;
	
	
	return 0;
}

// arr = 3 2 4 1
// sort(arr, arr+4, greater<int>());
// 1 2 3 4
// arr = 0, 4
// 0-3


// Tom 15 8 1993

// Mickey 1 10 1991
// Alice      30 12 1990
// Garfield   20  9 1990

// Jerry      18  9 1990
