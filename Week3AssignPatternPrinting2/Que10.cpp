#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    // Printing the semi-filled pyramid
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= i; ++j) {
            cout << "* ";
        }
        for (int j = 0; j < 2 * (n - i - 1); ++j) {
            cout << "  "; // Adjust spaces for formatting
        }
        for (int j = 0; j <= i; ++j) {
            cout << "* ";
        }
        cout << endl;
    }

    // Printing the upside-down semi-filled pyramid
    for (int i = n - 1; i >= 0; --i) {
        for (int j = 0; j <= i; ++j) {
            cout << "* ";
        }
        for (int j = 0; j < 2 * (n - i - 1); ++j) {
            cout << "  "; // Adjust spaces for formatting
        }
        for (int j = 0; j <= i; ++j) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}
