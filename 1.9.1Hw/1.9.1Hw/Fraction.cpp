#include "Fraction.h"


double Fraction::findValue(Fraction obj) {
   return (double)obj.numerator_ / (double)obj.denominator_;
}


Fraction::Fraction(int numerator, int denominator)
   {
      numerator_ = numerator;
      denominator_ = denominator;
   }

bool Fraction::operator==(const Fraction& other) {
   double a = findValue(*this);
   double b = findValue(other);

   if (fabs(a-b) <= DBL_EPSILON*fmax(fabs(a), fabs(b))) {
      return true;
   }
   else
      return false;
}

bool Fraction::operator!=(const Fraction& other) {
   if (*this == other) {
      return false;
   }
   else {
      return true;
   }
}

bool Fraction::operator<(const Fraction& other) {
   double a = findValue(*this);
   double b = findValue(other);

   if (a < b)
      return true;
   else
      return false;
}

bool Fraction::operator>(const Fraction& other) {
   double a = findValue(*this);
   double b = findValue(other);

   if (a > b)
      return true;
   else
      return false;
}

bool Fraction::operator<=(const Fraction& other) {
   double a = findValue(*this);
   double b = findValue(other);

   if (!(a < b))
      return true;
   else
      return false;
}

bool Fraction::operator>=(const Fraction& other) {
   double a = findValue(*this);
   double b = findValue(other);

   if (!(a > b))
      return true;
   else
      return false;
}