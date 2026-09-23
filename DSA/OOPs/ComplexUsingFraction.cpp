#include<iostream>
using namespace std;

class Fraction{
public:
    int num;
    int den;

    Fraction(int num = 0, int den = 1){
        this->num = num;
        this->den = den;
        simplify();
    }

    void simplify(){
        int hcf = gcd(num, den);

        num /= hcf;
        den /= hcf;

        if(den < 0){
            num = -num;
            den = -den;
        }
    }

    int gcd(int a, int b){
        a = abs(a);
        b = abs(b);

        if(a == 0)
            return b;

        return gcd(b % a, a);
    }

    void add(Fraction f){
        num = num * f.den + den * f.num;
        den = den * f.den;
        simplify();
    }

    void subtract(Fraction f){
        num = num * f.den - den * f.num;
        den = den * f.den;
        simplify();
    }

    void multiply(Fraction f){
        num = num * f.num;
        den = den * f.den;
        simplify();
    }

    void divide(Fraction f){
        num = num * f.den;
        den = den * f.num;
        simplify();
    }
};


class Complex{
public:

    Fraction real;
    Fraction imaginary;

    Complex(Fraction real, Fraction imaginary){
        this->real = real;
        this->imaginary = imaginary;
    }

    void print(){

        cout << real.num << "/" << real.den;

        if(imaginary.num < 0)
            cout << " - " << -imaginary.num << "/" << imaginary.den << "i";
        else
            cout << " + " << imaginary.num << "/" << imaginary.den << "i";

        cout << endl;
    }

    void divide(Complex c){

        // denominator = c.real² + c.imaginary²

        Fraction realSquare = c.real;
        realSquare.multiply(c.real);

        Fraction imaginarySquare = c.imaginary;
        imaginarySquare.multiply(c.imaginary);

        realSquare.add(imaginarySquare);

        Fraction denominator = realSquare;


        // new real = (a*c + b*d) / denominator

        Fraction realPart = real;
        realPart.multiply(c.real);

        Fraction temp = imaginary;
        temp.multiply(c.imaginary);

        realPart.add(temp);
        realPart.divide(denominator);


        // new imaginary = (b*c - a*d) / denominator

        Fraction imaginaryPart = imaginary;
        imaginaryPart.multiply(c.real);

        Fraction temp2 = real;
        temp2.multiply(c.imaginary);

        imaginaryPart.subtract(temp2);
        imaginaryPart.divide(denominator);


        real = realPart;
        imaginary = imaginaryPart;
    }
};


int main(){

    Fraction r1(3,1);
    Fraction i1(7,1);

    Fraction r2(2,1);
    Fraction i2(4,1);

    Complex c1(r1,i1);
    Complex c2(r2,i2);

    c1.print();

    c1.divide(c2);

    c1.print();
}