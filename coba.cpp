#include <iostream>
using namespace std;

long long faktorial(int n) {
    if (n == 0 || n == 1)
        return 1;  
    else
        return n * faktorial(n - 1); 
}

int main() {
    int angka;
    
    cout << "Masukkan sebuah angka: ";
    cin >> angka;

    if (angka < 0) {
        cout << "Faktorial tidak bisa untuk bilangan negatif." << endl;
    } else {
        long long hasil = faktorial(angka); 
        cout << "Faktorial dari " << angka << " adalah: " << hasil << endl;
    }

    return 0;
}
