#include <iostream>
#include <conio.h>
using namespace std;

const char prov = 'D';
const int days = 7;

int main()
{
    int temperature[prov][days];

    cout << "Please enter below the temperatures of Province A, B and C for seven days:\n\n" <<endl;

    for (char i = 'A'; i < 'D'; i++)
    {
		for (int j = 0; j < 7; j++)
		{
            cout << "Province " << i << ", Day " << j + 1 << " : "; cin >> temperature[i][j];
        }
    }



    cout << "\n\nDisplaying Values...\n" <<endl;

    for (char i = 'A'; i < 'D'; i++)
    {
        for(int j = 0; j < 7; j++)
        {
            cout << "The temperature of Province " << i << " during day " <<j + 1 <<" is: " << temperature[i][j] <<" C" <<endl;
        }
    }

    return 0;
}
