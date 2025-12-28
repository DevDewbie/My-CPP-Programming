#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	
	int a[3];
	string b;
	for (int i = 0; i < 3; i++) cin >> a[i]; 
	sort(a , a+3);
	cin >> b;
	for (int i = 0; i < 3; i++) cout << a[b[i] - 'A'] << ( i == 2 ? "" : " ");
	return 0;
}
