#include <bits/stdc++.h>
using namespace std;

int main() {
	// int, float, double, bool, char
	// string = array of characters

	// int arr_name[size] = {value1, value2};
	// int arr[10];
	// for(int i = 0; i < 10; i++) {
	// 	cout << arr[i] << "::";
	// }
	// cout << endl;
	int STRING_ER_SIZE       = 10;
	char ans[STRING_ER_SIZE] = "abc";
	// cout << strlen(ans) << endl;
	// char ans[STRING_ER_SIZE] = {'a', 'b', 'c'};
	// malloc()
	// calloc()

	// condition
	// ans = "NO";
	// strcpy(ans, "NO111111111111");

	// char ans[STRING_ER_SIZE] = "abc";
	// cout << ans[1] << endl;

	// c++

	string my_str = "hello world";

	// cout << my_str.size() << endl;

	// my_str = "hello me";
	// cout << my_str.size() << endl;

	// for(int i = 0; i < my_str.size(); i++) {
	// 	cout << my_str[i] << ' ';
	// }
	// cout << endl;

	// my_str = "1234";
	// cout << my_str << endl;
	// my_str.clear();

	// if(my_str.empty()) {
	// if(my_str.size()==0) {

	// if(my_str.size()==0) {
	// 	cout << "EMPTY" << endl;
	// }
	// else {
	// 	cout << "NOT EMPTY" << endl;
	// }

	// my_str = "1234567890";
	// my_str.resize(12, '0');

	// my_str = "12345674545";
	// cout << my_str[0] << endl;
	// cout << my_str[my_str.size()-1] << endl;
	// cout << endl;

	// cout << my_str.front() << endl;
	// cout << my_str.back() << endl;
	// cout << my_str[0] << endl;
	// cout << my_str.at(0) << endl;
	// 1234567890
	// .size()
	// -1

	my_str = "MY ";
	// cout << my_str << endl;

	my_str += "Name ";
	my_str += "Sajjat";

	my_str = my_str + " Khandaker";

	my_str = "Profile: " + my_str;

	my_str.append(" NEW");

	my_str.push_back('#');
	my_str.push_back('#');

	my_str.pop_back();
	my_str.pop_back();
	my_str.pop_back();

	my_str = "new string";
	my_str.assign("abar new");

	// my_str.erase(3, 3);
	// my_str.replace(my_str.size(), 0, "NEW");
	// my_str.insert(my_str.size(), "NEW");

	// cout << my_str << endl;

	// iterator,
	// for(int i=0; i<n; i++) {

	// my_str = "1234567890";

	// auto it = my_str.begin();

	// for(;it<my_str.end(); it++) {
	// 	cout << *it << ' ';
	// }

	my_str = "my name is is is rahim korim";

	// 30 ~ 20-30
	// 30-10=20
	// string sub = my_str.substr(5, 4);
	// cout << sub << endl;
	// cout << my_str << endl;

	int paice = my_str.find("is", 10);

	if(paice == string::npos) {
		cout << "PAWA JAI NAI" << endl;
	}
	else {
		cout << "PAWA GECHE, index: " << paice << endl;
	}


	return 0;
}
// 22 BYTE
// 1024 BYTE = 1KB
// 1024 KB = 1MB
// 1024 MB = 1GB
// 1024*1024*1024 = ~1 Billion BYTES
// 000003YES
// 05YESNO
// 99
// 100000hdsghbgergreg...
// --------------ABCDEF\0-------------
//

// arr[0]

// ----------
// abc-------


// 4 611 686 018 427 387 903
//       T
