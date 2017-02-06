#include <iostream>

using namespace std;

int main()
{
	int height;
	int level;

	cout << "Please enter the height of the tree you would like displayed: " << endl;
	cin >> height;

	if (height < 3 || height > 15)
	{
		cout << "Terminating..." << endl;
	}
	else
	{
		for (level = 1; level <= height; level++)
		{
			for (int j = 0; j <= height; j++)
			{
				if (j < (height - level))
				{
					cout << " ";
				}
				else if (j == height)
				{
					cout << "/";
				}
			}
			
			for (int k = 0; k <= ((level * 2) + (height - level)); k++)
			{
				if (k == ((level * 2) + (height - level - 1)))
				{
					cout << "\\";
				}
				else if (k < (level * 2 + (height - level)) && k > (height - level))
				{
					cout << " ";
				}
			}

			cout << endl;

		}

		for (int i = 0; i <= (height * 2 - 1); i++)
		{
			cout << "_";
		}
		
		cout << endl;

		for (int i = 0; i < (height/2); i++)
		{
			for (int j = 0; j <= (height); j++)
			{
				if (j == (height - 1))
				{
					cout << "||" << endl;
				}
				else if (j < height)
				{
					cout << " ";
				}

			}

			//cout << endl;
		}
	}

	return 0;
}