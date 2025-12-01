#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool validasiNama(string nama) {
    for(char c : nama)
        if(!isalpha(c)) return false;
    return true;
}

int main() {
    string nama;
    do {
        cout << "Masukkan nama: ";
        cin >> nama;
        if(!validasiNama(nama))
            cout << "Nama tidak valid, coba lagi!\n";
    } while(!validasiNama(nama));

    string nim;
    cout << "Masukkan NIM: ";
    cin >> nim;
    long saldo = stol(nim);

    cout << "\nHalo " << nama << ", saldo kamu Rp " << saldo << endl;

    int pilih;
    while(true) {
        cout << "\n===== MENU ATM =====\n";
        cout << "1. Cek Saldo\n2. Tarik Tunai\n3. Setor Tunai\n4. Transfer\n5. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilih;

        switch(pilih) {
            case 1:
                cout << "Saldo: Rp " << saldo << endl;
                break;
            case 2: {
                long tarik;
                cout << "Jumlah tarik: ";
                cin >> tarik;
                if(tarik <= saldo) saldo -= tarik;
                else cout << "Saldo tidak cukup!\n";
                break;
            }
            case 3: {
                long setor;
                cout << "Jumlah setor: ";
                cin >> setor;
                saldo += setor;
                break;
            }
            case 4: {
                string tujuan;
                long nominal;
                cout << "Rekening tujuan: ";
                cin >> tujuan;
                cout << "Nominal transfer: ";
                cin >> nominal;
                if(nominal <= saldo) saldo -= nominal;
                else cout << "Saldo tidak cukup!\n";
                break;
            }
            case 5:
                cout << "Terima kasih!\n";
                return 0;
            default:
                cout << "Menu tidak valid!\n";
        }
    }
}