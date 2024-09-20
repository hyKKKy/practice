#include"Student.h"

Student::Student(const std::string& StudentName, int StudentYO, int Average_Mark) {
	name = StudentName;
	years_old = StudentYO;
	average_mark = Average_Mark;
	std::cout << "Student - " << name << " is " << years_old << " years old. " << "Has " << average_mark << " average mark!" << std::endl;
}

Student::~Student() {
	std::cout << "Destructor for " << name << std::endl;
}