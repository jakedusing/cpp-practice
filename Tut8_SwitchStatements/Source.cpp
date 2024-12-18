#include <iostream>
#include <string>

using namespace std;

enum PlayerStatus
{
	PS_Running,
	PS_Walking,
	PS_Crouching
};

const float RunSpeed = 800.f;
const float WalkSpeed = 500.f;
const float CrouchSpeed = 350.f;

void UpdateMovementSpeed(PlayerStatus P_Status, float& speed);

void SwitchOnInt(int i);

int main()
{
	float MovementSpeed;

	PlayerStatus status = PS_Running;

	UpdateMovementSpeed(status, MovementSpeed);

	cout << "MovementSpeed = " << MovementSpeed << endl;

	int integer = 80;

	SwitchOnInt(integer);

	system("pause");
}

void UpdateMovementSpeed(PlayerStatus P_Status, float& speed)
{
	switch (P_Status)
	{
	case PS_Running:
		speed = RunSpeed;
		break;
	case PS_Walking:
		speed = WalkSpeed;
		break;
	case PS_Crouching:
		speed = CrouchSpeed;
	}

	// Using else ifs
	/*if (P_Status == PS_Running)
	{
		speed = RunSpeed;
	}
	else if (P_Status == PS_Walking)
	{
		speed = WalkSpeed;
	}
	else if (P_Status == PS_Crouching)
	{
		speed = CrouchSpeed;
	} */
}

void SwitchOnInt(int i)
{
	switch (i)
	{
	case 0:
		cout << "Your number was zero. \n";
		break;
	case 1:
		cout << "Your number was one. \n";
		break;
	case 2:
		cout << "Your number was two. \n";
		break;
	default:
		cout << "Your number was not 0, 1, or 2. \n";
	}
}