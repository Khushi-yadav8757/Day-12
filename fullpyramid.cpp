#include <iostream>
using namespace std;

int main() {
    int n = 5; // Number of rows
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " "; // Spaces
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*"; // Stars
        }
        cout << endl;
    }
    return 0;
}
