#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

int main() {
    
    vector<int> arr(9);
    for (int &c : arr) cin >> c;
    
    int total = accumulate(arr.begin(), arr.end(), 0);
    int excess = total - 100;
    
    for (int i = 0; i < 9; i++) {
        for (int j = i + 1; j < 9; j++) {
            if (arr[i] + arr[j] == excess) {
                for (int k = 0; k < 9; k++) {
                    if (k != i && k != j) {
                    	 cout << arr[k] << "\n";
                    }
                }
                return 0;
            }
        }
    }
    return 0;
}
