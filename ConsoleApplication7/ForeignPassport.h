#pragma once
#include <iostream>
#include "Passport.h"

class ForeignPassport : public Passport
{
public:
	ForeignPassport(const std::string& UserFIO, const std::string& UserSerieNumber, int UserAge, const std::string countries[]);
	~ForeignPassport();

private:
	static const int SIZE = 5;
	std::string VisaArray[SIZE];
};

