#pragma once
#include <iostream>
using namespace std;

class JC_ScoreKeeper
{
public:
	JC_ScoreKeeper();
	~JC_ScoreKeeper();
	void ScoreKeep();
private:
	int a, b, c, d, e;
	string input = "dbbaCEDbdAacCEAadcB";
};

