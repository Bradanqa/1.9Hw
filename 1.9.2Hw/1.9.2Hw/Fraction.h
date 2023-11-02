#pragma once
#include <iostream>

class Fraction
{
private:
   int numerator_;
   int denominator_;
   int numDenFun(Fraction obj, Fraction other, int &index1, int &index2);
   void reduc(int &num_, int &denum_);

public:
   Fraction(int numerator, int denominator);
   friend std::ostream& operator<<(std::ostream &str, const Fraction &other);

   Fraction operator+(const Fraction other);
   Fraction operator-(const Fraction other);
   Fraction operator*(const Fraction other);
   Fraction operator/(const Fraction other);
   Fraction operator++();
   Fraction operator++(int);
   Fraction operator--();
   Fraction operator--(int);
   Fraction operator-();
   void print();
};


