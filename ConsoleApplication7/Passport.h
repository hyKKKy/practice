#pragma once
#include <iostream>

class Passport
{
public:
	Passport(const std::string& UserFIO, const std::string& UserSerieNumber, int UserAge);

	~Passport();

protected:
	std::string FIO;
	std::string SerieNumber;
	int age;

};
