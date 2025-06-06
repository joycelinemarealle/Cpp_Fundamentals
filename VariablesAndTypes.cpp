//
// Created by Joyceline Marealle on 6/5/25.
#include<iostream>

int main(){
  bool flag = true;
  char a3 = 'c';
  std::string cb3 = "b";
  long a6 =3L;
  int8_t a7 = 1000000;
  // auto a8 = OxFF;
  // auto a9 = Ob111;
  double d = 2.2;
    float f = 3.3;

  char c3 ='c'; //single quote character

  std::cout << flag << a3 <<std::endl << d << std::endl << f << std::endl;

  /*Casting */
  double d1 = 2.2;
  int f1 = static_cast<int>(d1);
  std::cout << f1 <<std::endl;
  return 0;



  }