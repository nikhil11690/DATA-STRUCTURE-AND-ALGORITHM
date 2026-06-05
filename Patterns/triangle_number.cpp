#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++) {

        // Spaces
        for(int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        // Increasing numbers
        int val = i;
        for(int j = 1; j <= i; j++) {
            cout << val;
            val++;
        }

        // Decreasing numbers
        val = 2 * i - 2;
        for(int j = 1; j < i; j++) {
            cout << val;
            val--;
        }

        cout << endl;
    }

    return 0;
}
