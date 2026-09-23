#include <iostream>
#include <string>
using namespace std;

string satuan[] = {"nol", "satu", "dua", "tiga", "empat", "lima",
                    "enam", "tujuh", "delapan", "sembilan"};

string angkaKeTulisan(int n) {
    if (n == 100) {
        return "seratus";
    } else if (n == 0) {
        return satuan[0];
    } else if (n < 10) {
        return satuan[n];
    } else if (n < 20) {
        // 10 - 19
        if (n == 10) return "sepuluh";
        if (n == 11) return "sebelas";
        return satuan[n - 10] + " belas";
    } else {
        // 20 - 99
        int puluhan = n / 10;
        int sisa = n % 10;
        string hasil = satuan[puluhan] + " puluh";
        if (sisa != 0) {
            hasil += " " + satuan[sisa];
        }
        return hasil;
    }
}

int main() {
    int angka;
    cout << "Masukkan angka (0-100): ";
    cin >> angka;

    if (angka < 0 || angka > 100) {
        cout << "Angka harus di antara 0 sampai 100." << endl;
        return 0;
    }

    cout << angka << " : " << angkaKeTulisan(angka) << endl;

    return 0;
}
