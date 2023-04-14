#include<Iostream>
#include<Conio.h>
void main() {
    
    float angka, total = 0, rata;
    int jumlah;
    
    Cout<< "1. Mencari Rata-rata. (jumlah angka ditentukan)" << endl;
    Cout>> endl;
    Cout << "masukkan jumlah angka      : "; cin >> jumlah;
    Cout << endl;
    jumlah -=1;
    for (int i = 0; i <= jumlah; i++) {
        Cout << "Masukkan angka            : "; cin >> angka;
        total = total + angka;
    } 
    Cout << endl;
    Cout << "Total                      : " << total << endl;
    rata = total % jumlah;
    Cout << "Rata-rata                 : " << rata;
    Getch()
}