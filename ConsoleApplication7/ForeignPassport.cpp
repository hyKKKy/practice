#include <iostream>
#include "ForeignPassport.h"

ForeignPassport::ForeignPassport(const std::string& UserFIO, const std::string& UserSerieNumber, int UserAge, const std::string countries[])
    : Passport(UserFIO, UserSerieNumber, UserAge) {

    for (int i = 0; i < this->SIZE; i++) {
        VisaArray[i] = countries[i];
    }
    std::cout << "Available visas for: " << FIO << " is: " << std::endl;
    for (int i = 0; i < SIZE; ++i) {
        std::cout << "- " << VisaArray[i] << std::endl;
    }
}

ForeignPassport::~ForeignPassport() {
    std::cout << "Destructor for Foreign Passport of " << FIO << std::endl;
}
