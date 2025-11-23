#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string kalimat = "KAMPUS UNGU INSTITUT BISNIS DAN INFORMATIKA KESATUAN";

    string kecil = kalimat;
    transform(kecil.begin(), kecil.end(), kecil.begin(), ::tolower);

    string dibalik = kecil;
    reverse(dibalik.begin(), dibalik.end());

    cout << "Kalimat asli  : " << kalimat << endl;
    cout << "Huruf kecil   : " << kecil << endl;
    cout << "Dibalik       : " << dibalik << endl;

    return 0;
}

