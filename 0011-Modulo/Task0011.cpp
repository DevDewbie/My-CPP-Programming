#include <iostream>
#include <set>
using namespace std;

int main() {
	
	set<int> r;
	for(int i = 0 ; i < 10 ; i++) {
		int n;
		cin >> n;
		r.insert(n % 42);
	}
	cout << r.size();
	return 0;
}
