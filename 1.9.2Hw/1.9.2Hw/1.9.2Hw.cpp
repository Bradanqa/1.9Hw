#include "Fraction.h"

int main()
{
   int num1, num2;
   int den1, den2;

   std::cout << "Vvedite chislitel drobi 1: ";
   std::cin >> num1;
   std::cout << "Vvedite znamenatel drobi 1: ";
   std::cin >> den1;
   std::cout << "Vvedite chislitel drobi 2: ";
   std::cin >> num2;
   std::cout << "Vvedite znamenatel drobi 2: ";
   std::cin >> den2;

   Fraction f1(num1, den1);
   Fraction f2(num2, den2);

   Fraction f3 = f1 + f2;
   std::cout << f1 << " + " << f2 << " = " << f3 << std::endl;
   std::cout << f1 << " - " << f2 << " = " << (f3 = f1 - f2) << std::endl;
   std::cout << f1 << " * " << f2 << " = " << (f3 = f1 * f2) << std::endl;
   std::cout << f1 << " / " << f2 << " = " << (f3 = f1 / f2) << std::endl;

   std::cout << "++" << f1 << " * " << f2 << " = " << (f3 = ++f1 * f2) << std::endl;
   std::cout << "--" << f1 << " * " << f2 << " = " << (f3 = --f1 * f2) << std::endl;
   std::cout << f1 << "++" << " * " << f2 << " = " << (f3 = f1++ * f2) << std::endl;
   std::cout << f1 << "--" << " * " << f2 << " = " << (f3 = f1-- * f2) << std::endl;

   return 0;
}
