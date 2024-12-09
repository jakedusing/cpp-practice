#include <iostream>
#include <string>
using namespace std;

struct Character
{
	Character();

	string Name;
	float Health;
};

Character::Character()
{
	Name = "Default Name";
	Health = 100.f;
}

int main()
{
	for (int i = 0; i < 10; i++)
	{
		Character* PtrToChar = new Character();

		cout << PtrToChar->Name << endl;

		delete PtrToChar;  //without delete, would run out of memory causing a crash
	}

	system("pause");
}