#pragma once
#include <iostream>
#include <string>

class Student
{
public:
	Student(const std::string& StudentName, int StudentYO, int Average_Mark);

	~Student();
protected:
	std::string name;
	int years_old;
	int average_mark;
};
