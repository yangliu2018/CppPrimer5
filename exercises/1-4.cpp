#include <iostream>
int main(void)
{
  std::cout << "Enter two numbers:" << std::endl;
  int var1 = 0, var2 = 0;
  std::cin >> var1 >> var2;
  std::cout << "The product of " << var1 << " and " << var2
       << " is "  << var1 * var2 << std::endl;
  return 0;
}
