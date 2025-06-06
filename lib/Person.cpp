//
// Created by Joyceline Marealle on 6/5/25.
//
#include <iostream>
#include <string>
#include "Person.h"

int main (){
  Person::Person(std::string first,
                std::string last,
                int arbitary)
    :
  firstName(first),
  lastName(last),
  arbitaryNumber(arbitary)
  {
  }
  Person p1("Joyceline", "Marealle", 28);
  Person p2;

  std::string name = p1.getName();
//int i = p1.arbitrarynumber;


  }
