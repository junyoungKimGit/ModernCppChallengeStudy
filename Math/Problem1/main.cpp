//#include <gsl/gsl>
#include <iostream>

using namespace std;

int gSum = 0;

int main(int argc, char* argv[])
{
	int sEndNumber = 0;

	cin >> sEndNumber;

	for (int i = 3; i < sEndNumber; i = i + 3)
	{
		gSum += i;
	}

	for (int i = 5; i < sEndNumber; i = i + 5)
	{
		gSum += i;
	}

	for (int i = 15; i < sEndNumber; i = i + 15)
	{
		gSum -= i;
	}

	cout << gSum << endl;

    return 0;
}
