#include <iostream>
using namespace std;
 int main(){
 	const double phi=3.14; // kenapa menggunakan phi nya itu 3,14 ?agar lebih mudah ehehhehe
	 double r, t, v; //ini variabel nya
	
	cout << "Program menghitung volume tabung" <<endl;
	cout << "Masukkan jari jari = ";
	cin >> r; //masukkin variabel yg tadi udh di buat
	cout << "Masukkan tinggi tabung= ";
	cin >> t; //ini juga sama 
	v= phi*r*r*t; //ini mengembalikkan nilai atau rumusnya
	
	cout << "Rumus menghitung volume tabung, v= phi*r*r*t" <<endl;
	cout << "Volume tabung adalah = " << v;
	  
 }
 
