#include <iostream>
using namespace std;

void welcome();

char getYesNo();

void printResponse(char responseToPrint);

void AskYesOrNoQuestion();

int main()
{
	// Asks user to enter y or n then returns the response
	AskYesOrNoQuestion();

	system("pause");
}

void welcome()
{
	// Welcome the user to the program
	cout << "Welcome\n";
}

char getYesNo()
{
	// Ask the user yes or no?
	cout << "Please answer: y or n.\n";

	// char variable to store the response
	char response;

	// get input from the user via keyboard
	cin >> response;

	return response;
}

void printResponse(char responseToPrint)
{
	// Print the response to the screen
	cout << "Your answer was: " << responseToPrint << endl;
}

void AskYesOrNoQuestion()
{
	// Greet user
	welcome();

	// Create char variable and store the result from getYesNo
	char answer = getYesNo(); // getYesNo() gets a y or n from the user

	// Return the response back to the user on the screen
	printResponse(answer);
}