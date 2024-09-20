#pragma once
#include <iostream>
#include "Student.h"

class Aspirant : public Student
{
public:

	Aspirant(const std::string& StudentName, int StudentYO, int Average_Mark, const std::string& Date);

	~Aspirant();

private:
	std::string date;
};

