#include <iostream>
#include <string.h> 
#include <iomanip>

using namespace std;
int main()
{
	cout << "type any letter do u want, typed ""end"" for end" << endl;
	char letter[] ="viec", end[] = "end", END[] = "END";

	while (strcmp(letter , end) != 0 and strcmp(letter, END) !=0)
	{
		cin >> letter;
		if (strcmp(letter, end) != 0 and strcmp(letter, END) != 0)
		{
			_strlwr_s(letter);
			cout << letter << " ";
			_strupr_s(letter);
			cout << letter << endl;
		}


	}
}