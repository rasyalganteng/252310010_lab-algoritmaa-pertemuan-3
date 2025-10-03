#include <iostream>
using namespace std;

const double PI = 3.14;

double hitungLuasLingkaran(double r) {
    return PI * r * r; //ini variabel nya atau rumus yang akan dipakai
}



int main() {
    double jariJari;

    cout << " PROGRAM MENGHITUNG LUAS LINGKARAN " << endl;
    cout << "Masukkan jari-jari lingkaran (r): ";
    cin >> jariJari;

    // ini perhitungannya
    double luas = hitungLuasLingkaran(jariJari);

    // ini output hasilnya
    cout << "\nHasil Perhitungan" << endl;
    cout << "jari jari (r)   = " << jariJari << " cm" << endl;
    cout << "Luas (A)     = " << luas << " cm2" << endl;

    cout << "\nRumus: A = PI * r * r" << endl;
    cout << "      = " << PI << " * " << jariJari << " * " << jariJari << endl;
    cout << "      = " << luas << " cm2" << endl;

    return 0;
}
