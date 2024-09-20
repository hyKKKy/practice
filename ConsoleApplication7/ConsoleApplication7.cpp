#include <iostream>
#include "Student.h"
#include "Aspirant.h"
#include"Passport.h"
#include"ForeignPassport.h"

int main()
{
    Student s1("Ivan Balagan", 20, 10);
    Aspirant a1("Vova Ryabov", 23, 11, "23.04.2025");

    

    Passport p1("Dmytro Berezhkov Andriiovich", "FM0453RT", 17);

    std::string Countries[] = { "USA", "Germany", "Japan", "Spain", "France"};

    ForeignPassport fp1("Name Surname Lastname", "GHN1849U", 40, Countries);

}

