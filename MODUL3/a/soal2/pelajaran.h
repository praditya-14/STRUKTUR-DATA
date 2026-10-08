#ifndef PELAJARAN_H
#define PELAJARAN_H

#include <string>
using namespace std;

typedef struct pelajaran {
    string namaMapel;
    string kodeMapel;
} pelajaran;

pelajaran create_pelajaran(string namaPel, string kodepel);

void tampil_pelajaran(pelajaran inputPel);

#endif