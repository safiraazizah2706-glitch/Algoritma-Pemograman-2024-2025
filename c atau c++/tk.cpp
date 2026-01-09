#include <iostream>
#include <cstring>
using namespace std;

#define MAX_STACK 10 // maksimal data pada stack

struct STACK {
    int top;
    char data[MAX_STACK][10];
};

STACK tumpuk;

// Inisialisasi stack
void inisialisasi() {
    tumpuk.top = -1;
}

// Cek penuh
int IsFull() {
    if (tumpuk.top == MAX_STACK - 1)
        return 1;
    else
        return 0;
}

// Cek kosong
int IsEmpty() {
    if (tumpuk.top == -1)
        return 1;
    else
        return 0;
}

// Push data
void Push(char d[10]) {
    if (IsFull()) {
        cout << "Stack penuh!" << endl;
    } else {
        tumpuk.top++;
        strcpy(tumpuk.data[tumpuk.top], d);
        cout << "Data berhasil ditambahkan" << endl;
    }
}

// Pop data
void Pop() {
    if (IsEmpty()) {
        cout << "Stack kosong!" << endl;
    } else {
        cout << "Data yang terambil = " << tumpuk.data[tumpuk.top] << endl;
        tumpuk.top--;
    }
}

// Clear stack
void Clear() {
    tumpuk.top = -1;
    cout << "Stack dikosongkan" << endl;
}

// Tampilkan stack
void TampilStack() {
    if (IsEmpty()) {
        cout << "Stack kosong!" << endl;
    } else {
        cout << "Isi Stack:" << endl;
        for (int i = tumpuk.top; i >= 0; i--) {
            cout << i << " : >>>> " << tumpuk.data[i] << endl;
        }
    }
}

// Program utama
int main() {
    int pilihan;
    char data[10];

    inisialisasi();

    do {
        cout << "\nMENU STACK" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Tampil Stack" << endl;
        cout << "4. Clear" << endl;
        cout << "5. Keluar" << endl;
        cout << "Pilih : ";
        cin >> pilihan;

        switch (pilihan) {
        case 1:
            cout << "Masukkan data: ";
            cin >> data;
            Push(data);
            break;
        case 2:
            Pop();
            break;
        case 3:
            TampilStack();
            break;
        case 4:
            Clear();
            break;
        case 5:
            cout << "Keluar program" << endl;
            break;
        default:
            cout << "Pilihan salah!" << endl;
        }
    } while (pilihan != 5);

    return 0;
}