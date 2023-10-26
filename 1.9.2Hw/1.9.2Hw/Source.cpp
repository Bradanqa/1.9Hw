#include "Fraction.h"


Fraction::Fraction(int numerator, int denominator)
{
   numerator_ = numerator;
   denominator_ = denominator;
}

Fraction Fraction::operator+(const Fraction other) {

   int indexN1 = 1;
   int indexN2 = 1;
   int d1 = denominator_;
   int d2 = other.denominator_;
   int n1 = numerator_;
   int n2 = other.numerator_;

   int tempD1 = d1;
   int tempD2 = d2;

   while((d2 % d1) != 0) {
      d2 += tempD2;
      ++indexN2;
   }
   while((d1 % tempD2) != 0) {
      d1 += tempD1;
      ++indexN1;
   }

   n1 *= indexN1;
   n2 *= indexN2;

   if (d1 == d2) {
      int temp = n1 + n2;
      int tempD = d2;
      return Fraction(temp, tempD);
   }
   //else
   //throw
}

Fraction Fraction::operator-(const Fraction other) {

   int indexN1 = 1;
   int indexN2 = 1;
   int d1 = denominator_;
   int d2 = other.denominator_;
   int n1 = numerator_;
   int n2 = other.numerator_;

   int tempD1 = d1;
   int tempD2 = d2;

   while((d2 % d1) != 0) {
      d2 += tempD2;
      ++indexN2;
   }
   while((d1 % tempD2) != 0) {
      d1 += tempD1;
      ++indexN1;
   }

   n1 *= indexN1;
   n2 *= indexN2;

   if (d1 == d2) {
      int temp = n1 - n2;
      int tempD = d2;
      return Fraction(temp, tempD);
   }
   //else
   //throw
}

Fraction Fraction::operator*(const Fraction other) {
   int d1 = denominator_;
   int d2 = other.denominator_;
   int n1 = numerator_;
   int n2 = other.numerator_;


   int tempNum = n1 * n2;
   int tempDen = d1 * d2;


   int index = 9;
   for (int i = 1; i < 10; i++) {
      if (!(tempNum % index)) {
         if (!(tempDen % index)) {
            break;
         }
      }
      --index;
   }

   tempNum /= index;
   tempDen /= index;

   return Fraction(tempNum, tempDen);
}
Fraction Fraction::operator/(const Fraction other) {
   int d1 = denominator_;
   int d2 = other.denominator_;
   int n1 = numerator_;
   int n2 = other.numerator_;

   int tempNum = n1 * d2;
   int tempDen = d1 * n2;

   return Fraction(tempNum, tempDen);
}

Fraction Fraction::operator++() {
   numerator_ += denominator_;
   return *this;
}
Fraction Fraction::operator++(int) {
   numerator_ += denominator_;
   return *this;
}
Fraction Fraction::operator--() {
   numerator_ -= denominator_;
   return *this;
}
Fraction Fraction::operator--(int) {
   numerator_ -= denominator_;
   return *this;
}

Fraction Fraction::operator-() {
   int tempNum = -numerator_;

   return Fraction(tempNum, denominator_);
}

void Fraction::print(){
   std::cout << numerator_ << "/" << denominator_ << std::endl;
}

std::ostream& operator<<(std::ostream &str, const Fraction &other){
   return str << other.numerator_ << "/" << other.denominator_;
}