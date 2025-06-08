//
// Created by Joyceline Marealle on 6/7/25.
//
#include <string>
#include <iostream>
#include "Person.h"
#ifndef TWEETER_H
#define TWEETER_H
 class Tweeter :
    public Person
{
   private:
     std::string twitterhandler;
   public:
    Tweeter(std::string first,
            std::string last,
            int arbitary,
            std::string handle)
    ~Tweeter(); //destructor
 };

#endif //TWEETER_H
