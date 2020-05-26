
#include "Functions.h"

double calcAgeBeforeApril2020(const int& yob, const int& mob)
{
	int ageInYears{ 2020 - yob };
	int ageInMonth{ ageInYears * 12 + 4 - mob };

	return ageInMonth / 12.0;
}

void userInputs(string& nick, string& real, int& yob, int& mob)
{
	string checkedInput{ "no" };

	cout << "Please enter your full Name (Firstname Lastname).\n";
	std::getline(std::cin, real);
	cin.ignore(1000, '\n');

	cout << "\nPlease enter your Nickname.\n";
	cin >> nick;
	cin.ignore(1000, '\n');

	cout << "\nPlease enter your Year of birth (YYYY).\n";
	cin >> yob;
	cin.ignore(1000, '\n');

	cout << "\nPlease enter your Month of Birth (MM).\n";
	cin >> mob;
	cin.ignore(1000, '\n');

	while (checkedInput != "yes")
	{
		cout << "\n\n\nPlease review your inputs:";
		cout << "\n\t" << "nick: " << nick;
		cout << "\n\t" << "real: " << real;
		cout << "\n\t" << "yob: " << yob;
		cout << "\n\t" << "mob: " << mob << "\n";

		cout << "\nIf all inputs correct, please type 'yes' and press enter.";
		cin >> checkedInput;
		cin.ignore(1000, '\n');


		if (checkedInput != "yes")
		{
			char switchOn{ '@' };
			cout << "\n\n\nWhich input would you like to change? \nPlease type either \n\t'n' for nickname or \n\t'r' for real name or \n\t'y' for year of birth or \n\t'm' for month of birth.\nIf further inputs require changing, you can change them one at a time.\n";
			cin >> switchOn;
			cin.ignore(1000, '\n');

			switch (switchOn)
			{
			case 'n':
				cout << "\nPlease enter your Nickname.\n";
				cin >> nick;
				cin.ignore(1000, '\n');
				break;

			case 'r':
				cout << "\nPlease enter your full Name (Firstname Lastname).\n";
				std::getline(std::cin, real);
				cin.ignore(1000, '\n');
				break;

			case 'y':
				cout << "\nPlease enter your Year of birth (YYYY).\n";
				cin >> yob;
				cin.ignore(1000, '\n');
				break;

			case 'm':
				cout << "\nPlease enter your Month of Birth (MM).\n";
				cin >> mob;
				cin.ignore(1000, '\n');
				break;

			default:
				cout << "\n\nYou may have made a minor mistake in typing in your answer. Please keep the caps in mind and type in exactly as requested.";
				break;
			}

		}

	}
}

