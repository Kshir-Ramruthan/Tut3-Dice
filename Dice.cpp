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
	return (rand() % 6) + 1;
}//End roll

//Return the average of a specific number of rolls of the dice
float Dice::average(Dice die, int noRolls)
{
	int sum = 0;
	for (int i = 1; i <= noRolls;i++)
	{
		sum = sum + die.roll();
	}//End for-loop
	return float(sum) / float(noRolls);
}//End average

//Return the average of a number of specified integers
float Dice::average(int ints[], int noInts)
{
	int sum=0;
	for (int i = 0; i < noInts; i++)
	{
		sum = sum + ints[i];
	}//for-loop
	return float(sum) / float(noInts);
}//End average

//Default destructor
Dice::~Dice()
{
}//End destructor
