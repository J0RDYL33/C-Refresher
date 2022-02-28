#include "JC_GameWorld.h"

JC_GameWorld::JC_GameWorld()
{
	starterInt = 1;
	JC_GameWorld::main();
}

JC_GameWorld::~JC_GameWorld()
{

}

void JC_GameWorld::main()
{
	JC_Matrix1 myMatrix1 = JC_Matrix1();
	myMatrix1.PrintAsterix1(7);
	myMatrix1.PrintAsterix2(7);
	myMatrix1.PrintAsterix3(7);
	myMatrix1.PrintAsterix4();
	myMatrix1.PrintAsterix5();

	JC_WordFunneling myFunnel = JC_WordFunneling();
	myFunnel.WordFunnel();

	JC_DiceRolling myDice = JC_DiceRolling();
	myDice.RollDice();

	JC_ScoreKeeper myKeep = JC_ScoreKeeper();
	myKeep.ScoreKeep();
}