#include <iostream>
using namespace std;

int main()
{
	int MyInt(0);

	int count = 0;
	/*
	while (count <= 10)
	{
		cout << MyInt << endl;
		MyInt++;
		count++;
	} */

	double NumberPi = 3.14159;
	double NumberE = 2.718281828;

	bool Condition = true;

	do
	{
		cout << "The number PI is: " << NumberPi << endl;
		cout << "The number E is: " << NumberE << endl;
		cout << "Count: " << count << endl;
		cout << "Pi + E*count = " << NumberPi + NumberE * count << endl;

		count++;
		if (count <= 100)
		{
			Condition = true;
		}
		else
		{
			Condition = false;
		}
	} while (Condition);

	system("pause");
}