#include <iostream>
#include <string>
using namespace std;

class Animal
{
public:
	Animal();
	Animal(string name, int age, int num_limbs);

	string Name;
	int Age;
	int NumberOfLimbs;

	void Report();
};

class Dog : public Animal
{
public:
	Dog();
	Dog(string name, int age, int num_limbs);

	void Speak();
};

int main()
{
	Dog dog("Spot", 4, 5);
	dog.Speak();

	system("pause");
}

Animal::Animal()
{
	cout << "An ANIMAL is born! \n";

	Name = "DEFAULT";
	Age = 2;
	NumberOfLimbs = 4;
}

Animal::Animal(string name, int age, int num_limbs): Name(name), Age(age), NumberOfLimbs(num_limbs)
{
	Report();
}

void Animal::Report()
{
	cout << endl;
	cout << "Name: " << Name << endl;
	cout << "Age: " << Age << endl;
	cout << "NumberOfLimbs: " << NumberOfLimbs << endl;
	cout << endl;
}

Dog::Dog()
{
	cout << "A DOG is born!\n";
}

Dog::Dog(string name, int age, int num_limbs) : Animal(name, age, num_limbs)
{
}

void Dog::Speak()
{
	cout << "Woof!\n";
}