#include <iostream>
int main(void)
{
  std::cout << "Enter two integers: ";
  int val1 = 0, val2 = 0;
  std::cin >> val1 >> val2;
  int valMin = val1 < val2 ? val1 : val2;
  int valMax = val1 > val2 ? val1 : val2;
  std::cout << "Integers from " << valMin << " to " << valMax << " are";
  for (int valTemp = valMin; valTemp <= valMax; ++valTemp)
  {
    std::cout << " " << valTemp;
  }
  std::cout << std::endl;
  return 0;
}
