#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the no of rows: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << i + 1 << " ";
    }
    for(int i = n - 1; i >= 1; i--) {
        cout << i << " ";
    }
    cout << endl;

    for(int i = 1; i < n; ++i) {
        
        for(int j = 0; j < n - i; j++) {
            cout << j + 1 << " ";
        }

        for(int j = 0; j < 2 * i - 1; j++) {
            cout << "  "; 
        }

        for(int j = n - i; j >= 1; j--) {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}
