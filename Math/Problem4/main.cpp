//#include <gsl/gsl>
#include <iostream>

using namespace std;

bool gPrime[10000000];

// 에라토스테네스의 체
void initPrime(int aBoundary)
{
	gPrime[0] = gPrime[1] == false;

	for (int i = 2; i <= aBoundary; i++)
		gPrime[i] = true;

	for (int i = 2; i * i <= aBoundary; i++)
	{
		if (gPrime[i] == true)
		{
			for (int j = i + i; j <= aBoundary; j = i + j)
			{
				gPrime[j] = false;
			}
		}
	}

	return;

}

int main(int argc, char* argv[])
{
	int sBoundary = 0;

	cin >> sBoundary;

	initPrime(sBoundary);

	//p4
	for (int i = sBoundary; i > -1; i--)
	{
		if (gPrime[i] == true)
		{
			cout << i << endl;
			break;
		}
	}

	//p5
	for (int i = 2; i < sBoundary - 6; i++)
	{
		if (gPrime[i] == true && gPrime[i + 6] == true)
		{
			cout << i << " " << i + 6 << endl;
		}
	}

    return 0;
}
