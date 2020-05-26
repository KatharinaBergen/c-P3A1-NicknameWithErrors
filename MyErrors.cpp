
#include "MyErrors.h"
#include <iostream>

void error(const std::string& s) { throw std::runtime_error{ s }; }



void checkForErrors(const std::string& real, const int& yob, const int& mob)
{

	if (real.empty() || (real.find(" " ) == std::string::npos)) error("userInputs(), Incorrect Name");

	if (!(yob < 2010 && yob > 1900)) error("userInput(), birth year not 1900 - 2010.");

	if (!(mob >= 1 && mob <= 12)) error("userInput(), Month of birth not 1 to 12");

}