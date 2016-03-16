
#include "Fraction.h"
#include<iostream>
Fraction::Fraction()
{
    //ctor
}

Fraction::~Fraction()
{
    //dtor
}
Fraction:: Fraction(int numm1,int dumm1){
    numm=numm1;
    dumm=dumm1;
}
void Fraction::setnumm(int numm1)
{
    numm=numm1;
    dumm=1;
}
void Fraction::setdumm(int dumm1){
    dumm=dumm1;

}
int Fraction::getnumm(){
    return numm;

}
int Fraction::getdumm(){
    return dumm;
}
int Fraction::gcd(int numm1,int dumm1){
    if(dumm1== 0)
	{
	        return numm1;
	}
	else
	{
		return gcd(dumm1, numm1 % dumm1);
	}

}
int Fraction::lcm(int dumm1,int dumm2){
    int z=max(dumm1,dumm2);
    while(true)
    {
        if(z%dumm1==0&&z%dumm2==0){
            return z;
        }
        else{
            z++;
        }
    }
}
 Fraction Fraction::operator+(const Fraction &number){
     Fraction number1;
    number1.numm=numm*number.dumm+number.numm*dumm;
    number1.dumm=dumm*number.dumm;
    number1.reduce();
return number1;

}
 Fraction Fraction::reduce(){
    int x=0;
    x=gcd(numm,dumm);
    numm/=x;
    dumm/=x;
    Fraction number;
    number.numm=numm;
    number.dumm=dumm;
    return number;
}
Fraction Fraction::operator-(const Fraction &number){
    Fraction number1;
     number1.numm=numm*number.dumm-number.numm*dumm;
    number1.dumm=dumm*number.dumm;
    number1.reduce();
    return number1;
}
Fraction Fraction::operator*(const Fraction &number){
    Fraction number1;
    number1.numm*=number.numm;
    number1.dumm*=number.dumm;
    number1.reduce();
    return number1;

}
Fraction Fraction::operator/(const Fraction &number){
    Fraction number1;
    number1.numm/=number.numm;
    number1.dumm/=number.dumm;
    number1.reduce();
    return number1;
}
bool Fraction::operator<(Fraction number){
    if(number.dumm==dumm){
        if(numm<number.numm)
            return true;
        else
            return false;
    }
    else{
        int x,z;
        x=lcm(dumm,number.dumm);
        z=x;
        x/=dumm;
        z/=number.dumm;
        number.numm*=z;
        numm*=x;
        if(numm<number.numm)
            return true;
        else
            return false;
    }
}
bool Fraction::operator>(Fraction number){
    if(number.dumm==dumm){
        if(numm>number.numm)
            return true;
        else
            return false;
    }
    else{
       int x,z;
        x=lcm(dumm,number.dumm);
        z=x;
        x/=dumm;
        z/=number.dumm;
        number.numm*=z;
        numm*=x;
        if(numm>number.numm)
            return true;
        else
            return false;
    }
}
bool Fraction::operator<=(Fraction number){
     if(number.dumm==dumm){
        if(numm<=number.numm)
            return true;
        else
            return false;
    }
    else{
        int x,z;
        x=lcm(dumm,number.dumm);
        z=x;
        x/=dumm;
        z/=number.dumm;
        number.numm*=z;
        numm*=x;
        if(numm<=number.numm)
            return true;
        else
            return false;
    }
}
bool Fraction::operator>=(Fraction number){
     if(number.dumm==dumm){
        if(numm>=number.numm)
            return true;
        else
            return false;
    }
    else{
       int x,z;
        x=lcm(dumm,number.dumm);
        z=x;
        x/=dumm;
        z/=number.dumm;
        number.numm*=z;
        numm*=x;
        if(numm>=number.numm)
            return true;
        else
            return false;
    }
}
bool Fraction::operator==(Fraction number){
    if(number.numm=numm&&number.dumm==dumm)
        return true;
    return false;
}
 ostream &operator<<( ostream &output,const Fraction &f){
     output<<f.numm<< "/"<<f.dumm;
     return output;
 }
istream &operator>>( istream  &input, Fraction &f){
    input>>f.numm>>f.dumm;
    return input;

}

