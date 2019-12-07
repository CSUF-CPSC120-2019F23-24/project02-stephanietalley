// This program calculates and displays business expenses.
#include <iostream>
#include <iomanip>

int main()
{
  int days;
  double hotel, meal, total;
  std::string location;

  const int MAX_LOCATION_WIDTH = 20;
  const int MONEY_COLUMN_WIDTH = 12;
  const int NUMERIC_COLUMN_WIDTH = 6;


  /*Input information recieved from user*/
  std::cout << "What is the trip location? ";
  getline(std::cin, location);

  std::cout << "How many days will the trip take? ";
  std::cin >> days;

  std::cout << "What is the total hotel cost? $";
  std::cin >> hotel;

  std::cout << "What is the total meal cost? $";
  std::cin >> meal;


  /*Total of expenses*/
  total = days * (meal + hotel);


  /*Creates String*/
  std::stringstream sshotel, ssmeal, sstotal, sstrip;

  sshotel << std::setprecision(2) << std::fixed << '$' << hotel;
  ssmeal  << std::setprecision(2) << std::fixed << '$' << meal;
  sstotal << std::setprecision(2) << std::fixed << '$' << total;


  /*Displays results to user*/
  std::cout << std::endl << std::left;
  std::cout << std::setw(MAX_LOCATION_WIDTH) << "Location";
  std::cout << std::right;
  std::cout << std::setw(NUMERIC_COLUMN_WIDTH) << "Days";
  std::cout << std::setw(MONEY_COLUMN_WIDTH) << "Hotel";
  std::cout << std::setw(MONEY_COLUMN_WIDTH) << "Meal";
  std::cout << std::setw(MONEY_COLUMN_WIDTH) << "Total" << std::endl;


  sstrip << std::left;
  sstrip << std::setw(MAX_LOCATION_WIDTH) << location.substr(0, MAX_LOCATION_WIDTH - 1);
  sstrip << std::right;
  sstrip << std::setw(NUMERIC_COLUMN_WIDTH) << days;
  sstrip << std::setw(MONEY_COLUMN_WIDTH) << sshotel.str();
  sstrip << std::setw(MONEY_COLUMN_WIDTH) << ssmeal.str();
  sstrip << std::setw(MONEY_COLUMN_WIDTH) << sstotal.str() << std::endl;


  std::cout << sstrip.str();

  return 0;
}
