#include <iostream>
using namespace std;

int main() {
    int n = 5; // assuming the pattern is for 5 rows

    // Upper part of the pattern
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            cout << "*";
        }
        for (int j = 0; j < 2 * i; ++j) {
            cout << " ";
        }
        for (int j = 0; j < n - i - 1; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    // Lower part of the pattern
    for (int i = n - 1; i >= 0; --i) {
        for (int j = 0; j < n - i - 1; ++j) {
            cout << "*";
        }
        for (int j = 0; j < 2 * i; ++j) {
            cout << " ";
        }
        for (int j = 0; j < n - i - 1; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
