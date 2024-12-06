#include <iostream>
#include <string>
using namespace std;

struct Container
{
	string Name;

	int X;
	int Y;
	int Z;
};

int main()
{
	Container container = { "Sam", 5, 6, 7 };

	Container* PtrToCont = &container;

	cout << (*PtrToCont).Name << endl;
	cout << PtrToCont->Name << endl;  // does the same thing as above line but looks nicer/easier to read

	int numbers[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	int* NumPtr = numbers;

	cout << *NumPtr << endl;

	NumPtr++;

	cout << *NumPtr << endl;

	system("pause");
}