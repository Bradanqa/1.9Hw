#pragma once
#include <iostream>

class Fraction
{
private:
   int numerator_;
   int denominator_;

   double findValue(Fraction obj);

public:
   Fraction(int numerator, int denominator);
   bool operator==(const Fraction& other);
   bool operator!=(const Fraction& other);
   bool operator<(const Fraction& other);
   bool operator>(const Fraction& other);
   bool operator<=(const Fraction& other);
   bool operator>=(const Fraction& other);
};