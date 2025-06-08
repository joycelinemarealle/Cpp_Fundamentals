//
// Created by Joyceline Marealle on 6/7/25.
//

#include <iostream>
#include "Tweeter.h"
#include <string>

Tweeter::Tweeter(
        std::string first,
        std::string last,
        int arbitary,
        std::string handle)
    :
    Person(first, last, arbitary),
    twitterhandler(handle)
{
  std::cout << "constructing tweeter" << twitterhandler << std::endl;

 }
Tweeter::~Tweeter()
{
  std::cout << "destructing tweeter" << std::endl;
}

