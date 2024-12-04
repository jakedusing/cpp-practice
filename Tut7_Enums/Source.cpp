#include <iostream>
#include <string>

using namespace std;

enum PlayerStatus
{
	PS_Crouched,  // defaults to 0
	PS_Standing, // defaults to 1
	PS_Walking, // 2
	PS_Running //3
};

enum MovementStatus
{
	MS_Crouched,
	MS_Running
};

int main()
{
	PlayerStatus status;
	status = PlayerStatus::PS_Running;

	if (status == PS_Crouched)
	{
		cout << "The player is crouching! \n" << endl;
	}

	status = PS_Walking;
	if (status == PS_Crouched)
	{
		cout << "The player is crouching! \n" << endl;
	}

	system("pause");
}