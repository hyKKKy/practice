#include "Aspirant.h"

Aspirant::Aspirant(const std::string& StudentName, int StudentYO, int Average_Mark, const std::string& Date) : Student(StudentName, StudentYO, Average_Mark), date(Date) {
	std::cout << name << " is going to take an exam on the " << date << std::endl;
}

Aspirant::~Aspirant() {
	std::cout << "Destructor for " << name << std::endl;
}