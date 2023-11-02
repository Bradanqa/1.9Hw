#include "Fraction.h"

int Fraction::numDenFun(Fraction obj, Fraction other, int &index1, int &index2) {
   //Фунцкия приведения к общему знаменателю
   int d1 = obj.denominator_;
   int d2 = other.denominator_;
   int n1 = obj.numerator_;
   int n2 = other.numerator_;

   int tempD1 = d1;
   int tempD2 = d2;

   while((d2 % d1) != 0) {
      d2 += tempD2;
      ++index2;
   }
   while((d1 % tempD2) != 0) {
      d1 += tempD1;
      ++index1;
   }

   if (d1 == d2)
      return d2;
   else
      return 0;
   //else
     //throw;
}

void Fraction::reduc(int &num_, int &denum_) {
   //Функция сокращения дроби
   int j;
   int less;

   do{
      if(num_ < denum_)
         less = num_;
      else
         less = denum_;
      for(j = less; j > 0; j--){
         if(!(num_ % j) && !(denum_ % j)){
            num_ /= j;
            denum_ /= j;
            break;
         }
      }
   }while(j != 1);
}

Fraction::Fraction(int numerator, int denominator) {
   numerator_ = numerator;
   denominator_ = denominator;
}

Fraction Fraction::operator+(const Fraction other) {
   int n1 = numerator_;
   int n2 = other.numerator_;
   int indexN1 = 1;
   int* ind = &indexN1;
   int indexN2 = 1;
   int* ind2 = &indexN2;

   int d2 = numDenFun(*this, other, *ind, *ind2);

   indexN1 = *ind;
   indexN2 = *ind2;

   n1 *= indexN1;
   n2 *= indexN2;

   int temp = n1 + n2;
   int tempD = d2;
   return Fraction(temp, tempD);
}

Fraction Fraction::operator-(const Fraction other) {
   int n1 = numerator_;
   int n2 = other.numerator_;

   int indexN1 = 1;
   int* ind = &indexN1;
   int indexN2 = 1;
   int* ind2 = &indexN2;

   int d2 = numDenFun(*this, other, *ind, *ind2);

   indexN1 = *ind;
   indexN2 = *ind2;

   int temp = n1 - n2;
   int tempD = d2;

   return Fraction(temp, tempD);
}

Fraction Fraction::operator*(const Fraction other) {
   int d1 = denominator_;
   int d2 = other.denominator_;
   int n1 = numerator_;
   int n2 = other.numerator_;

   int tempNum = n1 * n2;
   int tempDen = d1 * d2;

   int* nums = &tempNum;
   int* dens = &tempDen;
   this->reduc(*nums, *dens);

   return Fraction(tempNum, tempDen);
}
Fraction Fraction::operator/(const Fraction other) {
   int d1 = denominator_;
   int d2 = other.denominator_;
   int n1 = numerator_;
   int n2 = other.numerator_;

   int tempNum = n1 * d2;
   int tempDen = d1 * n2;

   int* nums = &tempNum;
   int* dens = &tempDen;
   this->reduc(*nums, *dens);

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