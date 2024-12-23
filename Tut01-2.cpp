#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;

int main2()
{
	double n1, n2, chuyendoi,chuyendoi2;
	cout << "nhiet do cao " << endl;
	cin >> n1;
	cout << "nhiet do thap" << endl;
	cin >> n2;
	if (n2 > n1)
	{
		double n = n2;
		n2 = n1;
		n1 = n;
	}
	cout << "don vi C or F" << endl;
	char donvi;
	cin >> donvi;
	if (donvi == 'c' or donvi == 'C')
	{
		chuyendoi = (9 * n1 / 5) + 32;
		chuyendoi2 = (9 * n2 / 5) + 32;
		cout << "do F" << setw(20) << "do C" << endl;
		cout << chuyendoi2 << setw(20) << n2 << endl;
		cout << chuyendoi << setw(20) << n1 << endl;
	}
	else if (donvi == 'f' or donvi == 'F')
	{
		chuyendoi = 1.8 * (n1 - 32);
		chuyendoi2 = 1.8 * (n2 - 32);
		cout << "do F" << setw(20) << "do C" << endl;
		cout << n2 << setw(20) << chuyendoi2 << endl;
		cout << n1 << setw(20) << chuyendoi << endl;
	}
	else
		cout << "error";
	cout << "chenh lech " << n1 - n2 << endl;
	return 0;
}