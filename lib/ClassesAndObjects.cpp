//
// Created by Joyceline Marealle on 6/7/25.
//

#include "Person.h"
#include "Tweeter.h"
#include <iostream>
int main ()
{
  Person p1("Joyceline", "Marealle", 28);
  {
    Tweeter t1 ("Eve", "Marealle", 28, "@emlle");
    std::string name2 = t1.getName();
  }
  std::cout << "after innermost block "<< std::endl;
  std::string name = p1.getName();
  return 0;

}