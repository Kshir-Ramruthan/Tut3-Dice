#include "Dice.h"
#include<iostream> 

using namespace std;

//Default constructor
Dice::Dice()
{
}

//Return a randomly generated number
int Dice::roll()
{
	return rand() % 6 + 1;
}//End roll

//Return the average of a specific number of rolls of the dice
float Dice::average(Dice die, int noRolls)
{
	int sum = 0;
	for (int i = 1; i <= noRolls;i++)
	{
		sum = sum + die.roll;
	}
	return sum / noRolls;
}

//Return the average of a number of specified integers
float Dice::average(int ints[], int noInts)
{
	int sum;
	for (int i = 0; i < noInts; i++)
	{
		sum = sum + ints[i];
	}
	return sum / noInts;
}

//Default destructor
Dice::~Dice()
{
}
