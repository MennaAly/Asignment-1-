
#include " FractionCalculator .h"
#include "Fraction.h"
#include<iostream>
 FractionCalculator :: FractionCalculator ()
{
    //ctor
}

 FractionCalculator ::~ FractionCalculator ()
{
    //dtor
}
Fraction FractionCalculator ::reduce(){
    return(number.reduce());
}
Fraction FractionCalculator ::operator+(const Fraction &number1){
    return(number.operator+(number1));
}
Fraction FractionCalculator ::operator-(const Fraction &number1){
    return(number.operator-(number1));
}
Fraction FractionCalculator :: operator*(const Fraction &number1){
   return( number.operator*(number1));
}
Fraction  FractionCalculator ::operator/(const Fraction &number1){
    return(number.operator/(number1));

}

bool FractionCalculator ::operator<(Fraction number1){
     return(number.operator<(number1));
}

bool  FractionCalculator ::operator>(Fraction number1){
     return(number.operator>(number1));
}
bool  FractionCalculator ::operator<=(Fraction number1){
     return(number.operator<=(number1));
}
bool  FractionCalculator ::operator>=(Fraction number1){
     return(number.operator>=(number1));
}
bool  FractionCalculator ::operator==(Fraction number1){
     return(number.operator==(number1));
}
void FractionCalculator ::setnumm(int numm1){
    number.setnumm(numm1);

}
void FractionCalculator ::setdumm(int dumm1){
       number.setdumm(dumm1);

}

int  FractionCalculator ::getnumm(){
    return(number.getnumm());
}
int  FractionCalculator ::getdumm(){
    return(number.getdumm());
}
ostream &operator<<( ostream &out,Fraction &n){
    out<<n.getnumm()<<"/"<<n.getdumm();
    return out;
}

