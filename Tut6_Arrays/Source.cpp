#include <iostream>
#include <string>

using namespace std;

int main()
{
	int MyArray[] = { 1, 24, 6, 3, 9 };

	//cout << "MyArray[0] = " << MyArray[0] << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << "MyArray[" << i << "] = " << MyArray[i] << endl;
	}

	int MyIntArray[10];

	for (int i = 0; i < 10; i++)
	{
		MyIntArray[i] = i;
		//cout << MyIntArray[i] << endl;
	}

	cout << "The first elment in MyIntArray is: " << MyIntArray[0] << endl;

	cout << "The fifth element in MyIntArray is: " << MyIntArray[4] << endl;

	system("pause");
}