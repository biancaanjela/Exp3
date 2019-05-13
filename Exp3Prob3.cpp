#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	char arr[50];
	int n, i, j;

	cout << "Please input EXACT array size needed: "; cin >> n;
	cout << "Enter a word or phrase (no spaces): ";	
	
	for (i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	
	cout << "\n\nReversing Input...\n\n";
	cout << "The reversed input is: ";
	
	for (j = n-1; j > -1; j--)
	{
		cout << arr[j];
	}
	
	
	getch ();
	return 0;
}
