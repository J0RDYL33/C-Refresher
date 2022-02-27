#include "JC_Matrix1.h"
#include <iostream>
#include <ctime>
using namespace std;

JC_Matrix1::JC_Matrix1()
{
	asterix4Counter = 0;
	randint4 = 0;
}

JC_Matrix1::~JC_Matrix1()
{

}

int JC_Matrix1::main()
{
	return 0;
}

void JC_Matrix1::PrintAsterix1(int numOf)
{
	for (int i = 0; i < numOf; i++)
	{
		cout << "*";
	}
	cout << endl << endl;
}

void JC_Matrix1::PrintAsterix2(int numOf)
{
	for (int i = 0; i < numOf; i++)
	{
		for (int j = 0; j < numOf; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	cout << endl;
}

void JC_Matrix1::PrintAsterix3(int numOf)
{
	for (int i = 0; asterix4Counter <= numOf; i++)
	{
		for (int j = 0; j <= asterix4Counter; j++)
		{
			cout << "*";
		}
		asterix4Counter++;
		cout << endl;
	}
	cout << endl;
}

void JC_Matrix1::PrintAsterix4()
{
	bool boolArray[10][10];
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			randint4 = rand() % 2;
			if (randint4 == 0)
				boolArray[i][j] = true;
			else
				boolArray[i][j] = false;
		}
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (boolArray[i][j] == true)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void JC_Matrix1::PrintAsterix5()
{
	bool matrixArray5[10][10];
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			randint4 = rand() % 2;
			if (randint4 == 0)
				matrixArray5[i][j] = true;
			else
				matrixArray5[i][j] = false;
		}
	}

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (i == 0 || i == 9)
			{
				cout << "-";
			}
			else if (j == 0 || j == 9)
			{
				cout << "|";
			}
			else
			{
				if (matrixArray5[i][j] == true)
					cout << "*";
				else
					cout << " ";
			}
		}
		cout << endl;
	}
}