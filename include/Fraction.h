#ifndef FRACTION_H
#define FRACTION_H
using namespace std;
#include<iostream>
class Fraction
{
    int numm;
    int dumm;
    int gcd(int numm1,int dumm1);
    int lcm(int dumm1,int dumm2);
    public:
        Fraction();
        virtual ~Fraction();
        Fraction(int numm1,int dumm1);
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
        friend ostream &operator<<( ostream &output,const Fraction &f);
        friend istream &operator>>( istream  &input, Fraction &f);
        void setnumm(int numm1);//matnsyhom4y :D
        void setdumm(int dumm1);
        int getnumm();
        int getdumm();

    protected:

    private:
};

#endif // FRACTION_H
