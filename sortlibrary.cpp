#include <cstdlib>
#include <iostream>
#include <conio.h>
#include "sortlibrary.h"
using namespace std;

void Ascending(int array[], int n)
{
	for (int i = 0; i < n-1; i++) // lists the array items
	{
		for (int j = 0; j < n-i-1; j++) // compares each item's value if they are greater than the next item's value
										// once it checks that the item is greater than the next item,
										// the if statement inside will be executed
		{
			if (array[j] > array[j+1]) // will execute if the condition is met -> the previous item's value is greater than the next item
			{
				int temp = array[j]; // temp will act as a placeholder for higher number's value
				array[j] = array[j+1]; // this item will take the lower number's value
				array[j+1] = temp; // the temp will place the higher number's value to the next item
			}
		}
	}
};

void Descending(int array[], int n)
{
	for (int i = 0; i < n-1; i++)
	{
		for (int j = 0; j < n-i-1; j++)
		{
			if (array[j] < array[j+1]) // will execute if the condition is met -> the previous item's value is lesser than the next item
			{
				int temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
};