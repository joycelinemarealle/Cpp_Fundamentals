//
// ClassesAndObject.cpp:Defines the entry point for console application
//

#include "Person.h"
#include "Tweeter.h"
#include "status.h"
#include <iostream>

int main ()
{


  Person p1("Joyceline", "Marealle", 28);
  {

    Tweeter t1 ("Eve", "Marealle", 28, "@emlle");
    std::string name2 = t1.GetName();
  }
  std::cout << "after innermost block "<< std::endl;
  std::string name1 = p1.GetName();
  std::cout<< name1<< std::endl;
  p1.SetNumber(124);
  std::cout<< p1.GetNumber() << std::endl;

  Status s = Pending;
  s = Approved;

  // FileError fe = FileError::notfound;
  // fe = FileError::ok;
  //
  // NetworkError ne = NetworkError::disconnected;
  // ne = NetworkError::ok;


  // int x;
  // std::cout << "Enter a number:";
  // std::cin >> x;x

  // bool prime = true;
  // int i=2;
  //
  // while (i<=x/i) {
  //   int factor = x/i;
  //   if (factor*i == x)
  //
  //     std::cout << "factor found: " << i << std::endl;
  //   prime=false;
  //   }
  // i = i+1;
  //
  // std::cout << x << " is ";
  // if (prime){std::cout << "prime" << std::endl;}
  // else{std::cout << "not prime" << std::endl;}

// bool prime = true;
//   int i;
//   for (i = 2; i <= x/i; i= i+1 )
//   {
//     int factor = x/i;
//     if (factor*i == x)
//     {
//       std::cout << "factor found:" << i << "*" << factor << std::endl;
//       prime = false;
//       break;
//     }
//   }
//  std::cout << x << "is";
//   if (prime)
//   {
//     std::cout << "prime" << std::endl;
//   }
//
//   else
//   {
//     std::cout << "not prime" << std::endl;
//   }
//

  //SWITCH
 int y;
std::cout << "Enter a number, o or negative to quit" << std::endl;
std::cin >> y;
  while (y>0)
    {
    switch (y)
    {
    case 1:
      std::cout << "You entered 1" << std::endl;
      break;
    case 2:
    case 3:
      std::cout << "You entered 2 or 3" << std::endl;
      break;
    case 4:
      std::cout << "You entered 4" << std::endl;
      break;
    case 5:
    std::cout << "You entered 5" << std::endl;
      break;
    default:
      std::cout << "You entered other than 1-5"<<std::endl;
    }
    //ask for new input
    std::cout << "Enter a number, o or negative to quit" << std::endl;
    std::cin >> y;
  }


return 0;

}
