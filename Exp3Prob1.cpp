#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

int main ()
{
	int arr[10], i;
	float ave, min, max, total;
	
	cout << "Please enter 10 digits:\n(PRESS ENTER AFTER EVERY NUMBER!)\n" <<  endl;
	
	for (i = 0; i < 10; i++)
	{
		cout << i + 1 << ") ";
		cin >> arr [i];
	}
	
	//To get largest integer in the array:
	for (i = 0; i < 10; i++)
    {
        if (max < arr[i])
            max = arr[i];
    }
    min = arr[0];
    
    //To get Lowest integer in the array
    for (i = 0; i < 10; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }
        
    //To get the total sum of integers in the array:
	for (i = 0; i < 10; i++)
	{
		total = total + arr[i];
	}
	
	//Formula for the average:
	ave = total/10;
	
	cout << "\nThe Lowest Integer in the array is: " << min <<endl;
	cout << "\nThe Largest Integer in the array is: " << max <<endl;
	cout << "\nThe Total of the array is: " << total <<endl;
	cout << setprecision(2) << fixed;
	cout << "\nThe Average of the array is: "	<< ave <<endl;
	
	getch ();
	return 0;
}
