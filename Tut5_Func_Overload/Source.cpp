#include <iostream>
#include <string>
using namespace std;

void Print(string str);
void Print(int i);
void Print(string str1, string str2);

int main()
{

	Print("Hello World!");
	Print(3);
	Print("Hey", "There");


	system("pause");
}

void Print(string str)
{
	cout << str << endl;
}

void Print(int i)
{
	cout << i << endl;
}

void Print(string str1, string str2)
{
	cout << "String 1: " << str1 << endl;
	cout << "String 2: " << str2 << endl;
}