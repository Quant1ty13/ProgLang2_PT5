#include <cstdlib> // for the srand and rand syntax
#include <iostream>
#include <conio.h>
#include <ctime> // for the time syntax inside srand
#include "sortlibrary.h"
using namespace std;

int main()
{
	srand(time(0)); // Seed for random generating numbers
	int randomNumbers[50]; // Limit the array into 50 items
		
	for(int i = 0; i < 50; i++) // if the items are less than 50, increase/add another item until 50
	{
		randomNumbers[i] = rand() % 1001; // generates a random number for each item in the array with 1001 acting as a limit
	}

	Ascending(randomNumbers, 50); // Outputing the 50 array items in ascending order
	{
		cout << "<==== ASCENDING ORDER ====>" << '\n';
		
		for(int i = 0; i < 50; i++)
		{
			cout << randomNumbers[i] << '\n';
		}
	}

	Descending(randomNumbers, 50); // Outputing the 50 array items in descending order
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