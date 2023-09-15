//tugas 1 alprog menghitung sisi miring segitiga siku-siku

#include<iostream>
#include<cmath>
using namespace std;



int main()
{
	double a;
	double b;
	double c;

	cout << "masukan sisi A = ";
	cin >> a;

	cout << "masukan sisi B = ";
	cin >> b;

	a = pow(a, 2);
	b = pow(b, 2);
	c = sqrt(a + b);
	
	cout << "hasil sisi c = " << c;



	return 0;
	system("pause");
}