#include <iostream>
#include <string>
using namespace std;

class Critter
{
public:
	Critter()
	{
		cout << "A critter is born!\n";
		++CritterCount;
	}

	static void AnnounceCount()
	{
		cout << CritterCount << endl;
	}

	static int CritterCount;
};

int Critter::CritterCount = 0;

void AddToCount()
{
	static int count = 0;
	count++;
	cout << count << endl;
}

int main()
{
	Critter crit;
	Critter::AnnounceCount();
	Critter crit2;
	Critter::AnnounceCount();

	AddToCount();
	AddToCount();

	// Critter::CritterCount = 13;

	system("pause");
}