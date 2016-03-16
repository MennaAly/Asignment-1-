#include <iostream>
#include<Fraction.h>
#include " FractionCalculator .h"
using namespace std;

int main()
{
    Fraction n(3,4);
    Fraction x;
    FractionCalculator l;
    l.setnumm(1);
    l.setdumm(5);
    x=l.operator+(n);
    cout<<x;

    return 0;
}
