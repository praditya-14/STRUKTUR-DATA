#include <iostream>
using namespace std;

// Prosedur untuk menampilkan array 2D
void tampilArray(int arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

// Prosedur untuk menukarkan isi 2 array pada posisi tertentu
void tukarArray(int arr1[3][3], int arr2[3][3], int baris, int kolom) {
    int temp;

    temp = arr1[baris][kolom];
    arr1[baris][kolom] = arr2[baris][kolom];
    arr2[baris][kolom] = temp;
}

// Prosedur untuk menukarkan nilai yang ditunjuk oleh 2 pointer
void tukarPointer(int *p1, int *p2) {
    int temp;

    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {

    // 2 array 2D integer berukuran 3x3
    int array1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int array2[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };

    // 2 pointer integer
    int *p1;
    int *p2;

    cout << "Array 1 sebelum ditukar:" << endl;
    tampilArray(array1);

    cout << "\nArray 2 sebelum ditukar:" << endl;
    tampilArray(array2);

    // Menukar posisi [1][1]
    tukarArray(array1, array2, 1, 1);

    cout << "\nSetelah array ditukar pada posisi [1][1]:" << endl;

    cout << "\nArray 1:" << endl;
    tampilArray(array1);

    cout << "\nArray 2:" << endl;
    tampilArray(array2);

    // Pointer menunjuk ke array
    // array1[0][0] = 1
    // array2[0][0] = 10
    p1 = &array1[0][0];
    p2 = &array2[0][0];

    // Tukar nilai melalui pointer
    tukarPointer(p1, p2);

    cout << "\nSetelah nilai pointer ditukar:" << endl;

    cout << "array1[0][0] = " << array1[0][0] << endl;
    cout << "array2[0][0] = " << array2[0][0] << endl;

    return 0;
}