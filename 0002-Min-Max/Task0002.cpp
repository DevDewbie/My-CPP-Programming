#include <iostream>
using namespace std;

int main() {
	
	int min = 2000000000 , max = -2000000000 , n , x;
	cin >> n;
	
	for (int i = 0 ; i < n ; i++)
	{
		cin >> x;
		if(x < min)
			min = x;
		if(x > max)
			max = x;
	}
	cout << min << endl << max;
	return 0;
}
