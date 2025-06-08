//
// Created by Joyceline Marealle on 6/5/25.
//
#include <iostream>
#include <string>
#include "Person.h"

using std::cout;
using std::endl;

int main (){
  Person p1("Joyceline", "Marealle", 28);
  Person p2;
  std::string name = p1.getName();
//int i = p1.arbitrarynumber;

  cout << "Hello" << endl;
  std::string name2 = p1.getName();

  return 0;

  }
