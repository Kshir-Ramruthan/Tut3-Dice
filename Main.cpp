#include "Dice.h"
#include<iostream> 

using namespace std;

//Main method to test Dice class
int main()
{
	Dice die;
	int ints [6] = { 5, 2, 8, 6, 1, 9 };
	int noInts = 6, noRolls=10;
	cout << "The average of " << noRolls << " random dice rolls is: "<< die.average(die,noRolls)<< endl;
	cout << "The average of an array of " << noInts << " specified integers is: " << die.average(ints,noInts) << endl;
	
	return 1;
}//End main