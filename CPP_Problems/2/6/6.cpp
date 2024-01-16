#include<iostream>
using namespace std;

class Fractions
{
private:
    int Numerator;
    int Denominator;

public:
    // Constructor
    Fractions(int num, int den) : Numerator(num), Denominator(den) {}

    // Member functions
    Fractions Sum(Fractions f)
    {
        int num = Numerator * f.Denominator + Denominator * f.Numerator;
        int den = Denominator * f.Denominator;
        return Fractions(num, den);
    }

    Fractions Difference(Fractions f)
    {
        int num = Numerator * f.Denominator - Denominator * f.Numerator;
        int den = Denominator * f.Denominator;
        return Fractions(num, den);
    }

    Fractions Product(Fractions f)
    {
        int num = Numerator * f.Numerator;
        int den = Denominator * f.Denominator;
        return Fractions(num, den);
    }

    Fractions Division(Fractions f)
    {
        int num = Numerator * f.Denominator;
        int den = Denominator * f.Numerator;
        return Fractions(num, den);
    }

    void print()
    {
        cout << Numerator << "/" << Denominator << endl;
    }
    int gcd(int a, int b)
    {
        if (b == 0)
            return a;
        return gcd(b, a % b);
    }
    void simplify()
    {
        int g = gcd(Numerator, Denominator);
        Numerator /= g;
        Denominator /= g;
    }
};

int main()
{
    Fractions f1(2, 4);
    Fractions f2(4, 4);
    Fractions f3 = f1.Product(f2);
    f3.simplify();
    f3.print();
    return 0;
}
