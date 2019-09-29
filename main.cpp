// This program calculates and displays business expenses.
#include <iostream>
#include <iomanip>

int main()
{
  double total;
  //Display tracker

  std::string location;
  std::cout << "What is the trip location? ";
  getline(std::cin, location);

  char days, hotel, meal;
  std::cout << "How many days will the trip take? ";
  std::cin >> days;

  std::cout << "What is the total hotel cost? $";
  std::cin >> hotel;

  std::cout << "What is the total meal cost? $";
  std::cin >> meal;

  //.get(last_initial);
  //std::cin.ignore();

  // create username out of user's first name and middle/last initials
  std::string tracker = location+days+hotel+meal;
  std::cout << "Location       Days        Hotel        Meal        Total \n";
  std::cout << tracker << std::endl;

    return 0;
}
