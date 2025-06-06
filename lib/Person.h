//
// Created by Joyceline Marealle on 6/5/25.
//
#include <iostream>
#ifndef PERSON_H
#define PERSON_H
#include <string>
class Person
 {
private:
  std::string firstName;
  std::string lastName;
  int arbitaryNumber;

public:
    Person(std::string first, std::string last, int arbitary);
    Person()=default;
    std::string getName() {
        return firstName + "" + lastName;
    };
};

#endif //PERSON_H
