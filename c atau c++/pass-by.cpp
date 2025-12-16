#include <iostream>
using namespace std;

void kali_dua(int *num){
    *num = (*num) * 2;
}
int main(){
    int angka = 9;

    kali_dua(&angka);

    cout << "isi variabel angka =" << angka << endl;
    
    return 0;
    
}