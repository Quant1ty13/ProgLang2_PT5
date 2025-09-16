#include <cstdlib> // for the srand and rand syntax
#include <iostream>
#include <conio.h>
#include <ctime> // for the time syntax inside srand
#include "sortlibrary.h"
using namespace std;

int main()
{
	srand(time(0)); // Seed of some sorts for random generating numbers
	int randomNumbers[50]; // Limit the array into 50 items

	//int randomNum = (28914731214214135 * 210 / 93293841) % 51;
		
	for(int i = 0; i < 50; i++)
	{
		randomNumbers[i] = rand() % 1001;
	}

	Ascending(randomNumbers, 50); // Outputing the 50 array items in ascending order
	{
		cout << "<==== ASCENDING ORDER ====>" << '\n';
		
		for(int i = 0; i < 50; i++)
		{
			cout << randomNumbers[i] << '\n';
		}
	}

	Descending(randomNumbers, 50); // Outputing the 50 array items in ascending order
	{
		cout << "<==== DESCENDING ORDER ====>" << '\n';

		for(int i = 0; i < 50; i++)
		{
			cout << randomNumbers[i] << '\n';
		}
	}
	
	
	getch();
	return 0;
}