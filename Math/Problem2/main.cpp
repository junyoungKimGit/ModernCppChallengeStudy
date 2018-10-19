//#include <gsl/gsl>
#include <iostream>

using namespace std;

//유클리드 호재법으로 gcd 찾기
int gcd(int aBig, int aSmall)
{ 
	int mod = aBig % aSmall;
	while (mod > 0)
	{
		aBig = aSmall;
		aSmall = mod;
		mod = aBig % aSmall;
	}
	return aSmall;
}

int gcdEX(int aA, int aB)
{
	int sGCD = 0;
	if (aA > aB)
	{
		sGCD = gcd(aA, aB);
	}
	else
	{
		sGCD = gcd(aB, aA);
	}

	return sGCD;
}

int main(int argc, char* argv[])
{
	int sFirstNumber = 0;
	int sSecondNumber = 0;

	cin >> sFirstNumber >> sSecondNumber;

	cout << gcdEX(sFirstNumber, sSecondNumber) << endl;

    return 0;
}
