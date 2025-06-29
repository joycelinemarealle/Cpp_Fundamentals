//
// Created by Joyceline Marealle on 6/7/25.
//
#pragma once
#include "Person.h"
#include <string>
#include <iostream>
#ifndef TWEETER_H
#define TWEETER_H
 class Tweeter : public Person{
 private:
     std::string twitterhandler;

 public:
    Tweeter(std::string first,
            std::string last,
            int arbitary,
            std::string handle);
    ~ Tweeter(); //destructor
 };

#endif //TWEETER_H
