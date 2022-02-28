#include "JC_ScoreKeeper.h"

JC_ScoreKeeper::JC_ScoreKeeper()
{
	a = 0; b = 0; c = 0; d = 0; e = 0;
}

JC_ScoreKeeper::~JC_ScoreKeeper()
{

}

void JC_ScoreKeeper::ScoreKeep()
{
	char indiv[20];
	strcpy_s(indiv, input.c_str());

	for (int i = 0; i < 20; i++)
	{
		switch (indiv[i])
		{
		case 'a':
			a++;
			break;
		case 'A':
			a--;
			break;
		case 'b':
			b++;
			break;
		case 'B':
			b--;
			break;
		case 'c':
			c++;
			break;
		case 'C':
			c--;
			break;
		case 'd':
			d++;
			break;
		case 'D':
			d--;
			break;
		case 'e':
			e++;
			break;
		case 'E':
			e--;
			break;
		}
	}

	int combined[5];
	combined[0] = a; combined[1] = b; combined[2] = c; combined[3] = d; combined[4] = e;


	cout << "a:" << a << " b:" << b << " c:" << c << " d:" << d << " e:" << e << endl << endl;
}
