//#include <gsl/gsl>

#include <iostream>

using namespace std;

//Abundant number
int SumOfDivisors(int aBoundary)
{
	int sSum = 0;

	for (int i = 1; i <= aBoundary; i++)
	{
		if (aBoundary % i == 0) 
		{
			sSum += i;
		}
	}

	return sSum;
}

void printDivisors(int aBoundary)
{
	for (int i = 1; i <= aBoundary; i++)
	{
		if (aBoundary % i == 0)
		{
			cout << i << " ";
		}
	}
	cout << endl;
}


int main(int argc, char* argv[])
{
	int sBoudary = 0;
	cin >> sBoudary;

	for (int i = 2; i <= sBoudary; i++)
	{
		if (i < SumOfDivisors(i))
		{
			printDivisors(i);
		}
	}

    return 0;
}
