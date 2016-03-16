#ifndef  FRACTIONCALCULATOR _H
#define  FRACTIONCALCULATOR _H
#include "Fraction.h"
#include<iostream>
class  FractionCalculator

{
    Fraction number;
    public:
         FractionCalculator ();
        virtual ~ FractionCalculator ();
        Fraction reduce();
        Fraction operator+(const Fraction &number);
        Fraction operator-(const Fraction &number);
        Fraction operator*(const Fraction &number);
        Fraction operator/(const Fraction &number);
        bool operator<(Fraction number);
        bool operator>(Fraction number);
        bool operator<=(Fraction number);
        bool operator>=(Fraction number);
        bool operator==(Fraction number);
        void setnumm(int numm1);
        void setdumm(int dumm1);
        int getnumm();
        int getdumm();
        friend ostream &operator<<( ostream &out,Fraction &n);

    protected:

    private:
};

#endif //  FRACTIONCALCULATOR _H

