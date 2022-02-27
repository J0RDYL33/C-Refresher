#include "JC_WordFunneling.h"

JC_WordFunneling::JC_WordFunneling()
{
	numOfMissing = 0;
}

JC_WordFunneling::~JC_WordFunneling()
{

}

void JC_WordFunneling::WordFunnel()
{
	string starter = "jordy";
	string comparer = "jrdy";

	char word1[5 + 1];
	char word2[4 + 1];

	strcpy_s(word1, starter.c_str());
	strcpy_s(word2, comparer.c_str());

	int j = 0;
	for (int i = 0; i < starter.length(); i++)
	{
		if (word1[i] != word2[j])
		{
			numOfMissing++;
			j--;
		}
		j++;
	}
	if (numOfMissing != 1)
		cout << starter << " does not funnel " << comparer << endl;
	else
		cout << starter << " funnels " << comparer << endl;

	cout << endl;
}