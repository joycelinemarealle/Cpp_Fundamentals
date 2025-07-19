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

    ~Person();
    std::string GetName() const;
    int GetNumber() const {return arbitaryNumber;}
    void SetNumber(int number){arbitaryNumber= number;}
};
#endif //PERSON_H