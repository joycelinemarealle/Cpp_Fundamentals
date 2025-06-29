//
// Created by Joyceline Marealle on 6/5/25.
//
#pragma once
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
    Person(std::string first, std::string last, int age); //declaration
    //default defined if initializing object without parameters
    //Person()=default;
    std::string getName() {
        return firstName + " " + lastName;
    };
};
#endif //PERSON_H