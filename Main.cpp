/*
Author: Kat Bergen
v.01 25.05.2020
source folder: C:\Users\katha\source\repos\

adjust nickname program from Praktikum 1 Aufgabe 3c to include error handeling

pad1 - P3A1
*/

#include "MyErrors.h"
#include "Functions.h"


int main() try
{
	string nick{ "no nickname" };
	string real{ "no realname" };
	int yob{ 0 };
	int mob{ 0 };

	userInputs(nick, real, yob, mob);

	checkForErrors(real, yob, mob);

	cout << "\n\n\t" << "Age at Start of Semester: " << calcAgeBeforeApril2020(yob, mob) << "\n\n";

	return 0;
}

catch (std::runtime_error& e )
{
	std::cerr << std::endl << std::endl << e.what() << std::endl << std::endl;
}

catch (...)
{
	std::cerr << "\nOther error.\n\n";
}
