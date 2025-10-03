#include <iostream>
using namespace std;

int main()
{
	int a, b, c=0, d=0;
	cout << " operasi perkalian " << endl;
	
	cout << "masukkan nilai A = ";
	cin >> a;
	
	cout << "masukkan nilai B = ";
	cin >> b;
	
	c = a % b;
	d = a * b;
	
	cout << "hasil dari c = A % B = " << c << endl;
	cout << "hasil dari D = A * B = " << d;
	
	getchar();
	
}
