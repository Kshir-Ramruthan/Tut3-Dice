#pragma once
class Dice
{
public:
	Dice();
	int roll();
	float average(Dice die, int noRolls);
	float average(int ints[],int noInts);
	~Dice();
};

