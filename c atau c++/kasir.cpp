#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string nama;
    double harga;
    int jumlah;

    cout << "Masukkan nama barang: ";
    getline(cin, nama);
    cout << "Masukkan harga barang: ";
    cin >> harga;
    cout << "Masukkan jumlah beli: ";
    cin >> jumlah;

    double total = harga * jumlah;
    double diskon = 0.0;
    if (total > 56000.0) diskon = total * 0.06;

    double total_bayar = total - diskon;


    cout << "\n===== STRUK PEMBELIAN =====\n";
    cout << "Nama barang : "<< nama << endl;
    cout << "Harga Satuan : "<< harga << endl;
    cout << "Jumlah Beli : "<< jumlah << endl;
    cout << "Total Harga : "<< total << endl;
    cout << "Diskon : "<< diskon << endl;
    cout << "Total bayar : "<< total_bayar << endl;
    cout << "========================\n";

    return 0;
}
