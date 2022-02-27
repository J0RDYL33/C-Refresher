#include "JC_DiceRolling.h"

JC_DiceRolling::JC_DiceRolling()
{

}

JC_DiceRolling::~JC_DiceRolling()
{

}

void JC_DiceRolling::RollDice()
{
	string dice = "3d8";
	char diceSplit[3 + 1];
	strcpy_s(diceSplit, dice.c_str());

	int numOfDice = diceSplit[0] - '0';
	int sidesOnDice = diceSplit[2] - '0';

	//rand() % 2;

	cout << "Total number: " << numOfDice * sidesOnDice << endl << endl;
}