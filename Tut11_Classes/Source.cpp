#include <iostream>
#include <string>
using namespace std;

class Dog
{
public:

	Dog();

	string Name;
	int Age;
	float Health;

	void Bark()
	{
		cout << "Woof!" << endl;
	}
};

int main()
{
	Dog Spot;
	Dog Rex;

	Spot.Name = "Spot";
	cout << Spot.Name << endl;

	system("pause");
}

Dog::Dog()
{
	Bark();

	Name = "Default Name";
	Age = 1;
	Health = 100.f;
}