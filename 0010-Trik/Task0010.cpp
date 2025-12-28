#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	
	bool a = true , b = false , c = false;
	string s;
	cin >> s;
	for (char ch : s) {
		 switch(ch) {
		 	case 'A' : swap(a, b); break;
		 	case 'B' : swap(b, c); break;
		 	case 'C' : swap(a, c); break;
		 }
	}
	if(a) cout << "1";
	else if(b) cout << "2";
	else if(c) cout << "3";
	return 0;
}
