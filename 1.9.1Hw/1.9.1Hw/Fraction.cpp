#include "Fraction.h"


Fraction::Fraction(int numerator, int denominator)
   {
      numerator_ = numerator;
      denominator_ = denominator;
   }

bool Fraction::operator==(const Fraction other) {
   double first = (double)numerator_ / (double)denominator_;
   double second = (double)other.numerator_ / (double)other.denominator_;

   if (first == second)
      return true;
   else
      return false;
}

bool Fraction::operator!=(const Fraction other) {
   double first = (double)numerator_ / (double)denominator_;
   double second = (double)other.numerator_ / (double)other.denominator_;

   if (!(first == second))
      return true;
   else
      return false;
}

bool Fraction::operator<(const Fraction other) {
   double first = (double)numerator_ / (double)denominator_;
   double second = (double)other.numerator_ / (double)other.denominator_;

   if (first < second)
      return true;
   else
      return false;
}

bool Fraction::operator>(const Fraction other) {
   double first = (double)numerator_ / (double)denominator_;
   double second = (double)other.numerator_ / (double)other.denominator_;

   if (first > second)
      return true;
   else
      return false;
}

bool Fraction::operator<=(const Fraction other) {
   double first = (double)numerator_ / (double)denominator_;
   double second = (double)other.numerator_ / (double)other.denominator_;

   if (!(first < second))
      return true;
   else
      return false;
}

bool Fraction::operator>=(const Fraction other) {
   double first = (double)numerator_ / (double)denominator_;
   double second = (double)other.numerator_ / (double)other.denominator_;

   if (!(first > second))
      return true;
   else
      return false;
}