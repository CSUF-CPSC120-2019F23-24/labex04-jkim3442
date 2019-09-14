// Sales prediction

#include <iostream>

int main()
{
  long int my_sale2;
  const double PERCENTAGE = 1.18;
  const  long int FIRST_SALE = 2103419277;

  std::cout << "Last's year's sale were $" << FIRST_SALE << std::endl;

  my_sale2 = FIRST_SALE * PERCENTAGE;

  std::cout << "This year's sales prediction: $" << my_sale2 << std::endl;

  return 0;
}
