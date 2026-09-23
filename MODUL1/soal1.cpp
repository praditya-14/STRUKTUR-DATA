#include <iostream>
using namespace std;

int main() {
    float a, b;

    cout << "Masukkan bilangan pertama: ";
    cin >> a;
    cout << "Masukkan bilangan kedua: ";
    cin >> b;

    cout << "Penjumlahan : " << a << " + " << b << " = " << (a + b) << endl;
    cout << "Pengurangan : " << a << " - " << b << " = " << (a - b) << endl;
    cout << "Perkalian   : " << a << " * " << b << " = " << (a * b) << endl;

    if (b != 0) {
        cout << "Pembagian   : " << a << " / " << b << " = " << (a / b) << endl;
    } else {
        cout << "Pembagian   : tidak bisa dibagi dengan 0" << endl;
    }

    return 0;
}
