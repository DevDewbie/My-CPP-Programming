#include <iostream>
#include <cctype>
using namespace std;

int main() {
	
	string s;
	bool u = false , l = false ;
	cin >> s;
	
	for(char c:s) {
		if(isupper(c))
			u = true;
		if(islower(c))
			l = true;
	}
	if(u&&l)
		cout << "Mix";
	else if(u)
		cout << "All Capital Letter";
	else
		cout << "All Small Letter";
	return 0;
}
