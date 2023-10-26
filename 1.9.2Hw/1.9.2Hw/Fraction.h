#pragma once
#include <iostream>

class Fraction
{
private:
   int numerator_;
   int denominator_;

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

std::ostream& operator<<(std::ostream &str, const Fraction &other){
   return str << other.numerator_ << "/" << other.denominator_;
}