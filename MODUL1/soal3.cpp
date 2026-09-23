#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "input: ";
    cin >> n;

    cout << "output:" << endl;

    for (int baris = n; baris >= 1; baris--) {
        for (int i = baris; i >= 1; i--) {
            cout << i << " ";
        }

        cout << "* ";

        for (int i = 1; i <= baris; i++) {
            cout << i;
            if (i != baris) cout << " ";
        }

        cout << endl;
    }

    cout << "*" << endl;

    return 0;
}
