#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int main()
{
	srand((unsigned)time(NULL));
	int target = rand() % 100;
	int input;

	do
	{
		cout << "Please, guess any number between 0 and 99: " << endl;
		cin >> input;
		
		if (input == target)
		{
			cout << "Congratulations! You guessed correctly! The answer was, indeed, " << target << endl;
		}
		else if (input == -1)
		{
			cout << "Terminating..." << endl;
		}
		else if (input > target)
		{
			cout << "Incorrect. Your guess was too high." << endl;
		}
		else if (input < target && input >= 0)
		{
			cout << "Incorrect. Your guess was too low." << endl;
		}


		

		
	} while (input != target && input != -1);


	return 0;
}