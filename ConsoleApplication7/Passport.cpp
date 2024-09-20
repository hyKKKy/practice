#include <iostream>
#include "Passport.h"

Passport::Passport(const std::string& UserFIO, const std::string& UserSerieNumber, int UserAge) {
	FIO = UserFIO;
	SerieNumber = UserSerieNumber;
	age = UserAge;
	std::cout << FIO << " has " << SerieNumber << " serie number in passport." << " Person is " << age << " years old!" << std::endl;
}

Passport::~Passport() {
	std::cout << "Destructor for " << FIO << std::endl;
}