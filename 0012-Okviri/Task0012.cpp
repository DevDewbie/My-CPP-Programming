#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    
    string x; 
    cin >> x;
    int n = x.size();
    vector<string> grid(5, string(4 * n + 1, '.'));

    auto draw_frame = [&](int i, char b) {
        int c = 2 + (i * 4); 
        grid[0][c] = b;
        grid[1][c - 1] = b;
        grid[1][c + 1] = b;
        grid[2][c - 2] = b;
        grid[2][c + 2] = b;
        grid[3][c - 1] = b;
        grid[3][c + 1] = b;
        grid[4][c] = b;
        
        grid[2][c] = x[i];
    };
    for (int i = 0; i < n; i++) {
        if ((i + 1) % 3 != 0) {
            draw_frame(i, '#');
        }
    }
    for (int i = 0; i < n; i++) {
        if ((i + 1) % 3 == 0) {
            draw_frame(i, '*');
        }
    }
    for (const string& row : grid) {
    	cout << row << "\n";
    }
    return 0;
}
