#include "pelajaran.h"
#include <iostream>
using namespace std;

pelajaran create_pelajaran(string namaPel, string kodepel) {
    pelajaran pel;

    pel.namaMapel = namaPel;
    pel.kodeMapel = kodepel;

    return pel;
}

void tampil_pelajaran(pelajaran inputPel) {
    cout << "nama pelajaran : " << inputPel.namaMapel << endl;
    cout << "nilai : " << inputPel.kodeMapel << endl;
}