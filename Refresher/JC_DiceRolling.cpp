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

	//int numOfDice = diceSplit[0] - '0';
	//int sidesOnDice = diceSplit[2] - '0';
	const int numOfDice = 5;
	const int sidesOnDice = 100;

	//rand() % 2;
	int currentRoll = 0;
	int totalOfRolls = 0;
	int eachRoll[numOfDice];
	for (int i = 0; i < numOfDice; i++)
	{
		currentRoll = rand() % sidesOnDice + 1;
		eachRoll[i] = currentRoll;
		totalOfRolls += currentRoll;
	}

	cout << totalOfRolls << ": ";
	for (int i = 0; i < numOfDice; i++)
	{
		cout << eachRoll[i] << " ";
	}
	cout << endl << endl;
}