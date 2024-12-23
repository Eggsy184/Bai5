#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;

int main()
{
	double n, chuyendoi;
	cout << "nhiet do chuyen doi "<< endl;
	cin >> n; 
	cout << "don vi C or F" << endl;
	char donvi; 
	cin >> donvi; 
	if (donvi =='c' or donvi == 'C')
	{
		chuyendoi = (9 * n / 5) + 32;
		cout << "do C"<< setw(10) << "do F" << endl;
		cout << n << setw(10)<< chuyendoi << endl;
	}
	else if (donvi == 'f' or donvi == 'F')
	{
		chuyendoi = 1.8 * (n - 32);
		cout << "do F" << setw(10) << "do C" << endl;
		cout << n << setw(10) << chuyendoi << endl;
	}
	else
		cout << "error";
	return 0;

}
