//
// Created by Joyceline Marealle on 6/5/25.
//
#include "Person.h"
#include <iostream>
#include <string>

Person::Person(std::string first, std::string last, int age):
    firstName(first),lastName(last), arbitaryNumber(age)
{
    std::cout << "constructing" << GetName() << std::endl;
}

Person::~Person() {
    std::cout << "Person Destructor" << GetName() << std::endl;
}

std::string Person::GetName() const {
    return firstName + "  " + lastName;
}


