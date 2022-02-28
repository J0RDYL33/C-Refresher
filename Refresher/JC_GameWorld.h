#pragma once
#include "JC_Matrix1.h"
#include "JC_WordFunneling.h"
#include "JC_DiceRolling.h"
#include "JC_ScoreKeeper.h"
#include <iostream>
using namespace std;

class JC_GameWorld
{
public:
	JC_GameWorld();
	~JC_GameWorld();
	void main();
	int starterInt;
};

