#include <iostream>
#include "Sales_item.h"
int main()
{
  Sales_item itemSum, itemTemp;
  while (std::cin >> itemTemp)
  {
    itemSum += itemTemp;
  }
  std::cout << itemSum << std::endl;
  return 0;
}
