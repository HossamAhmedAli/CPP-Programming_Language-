#include <iostream>
using namespace std;

class Complex
{
private:
    double real, imag;
public:
    // constructor
    Complex(double r = 0, double i = 0)
    {
        real = r;
        imag = i;
    }
    // overload the insertion operator
    friend ostream& operator<< (ostream& out, const Complex& c);
    friend istream& operator>> (istream& in, Complex& c);
    Complex operator= (const Complex& C)
    {
        real = C.real;
        imag = C.imag;
        return Complex(real,imag);
    }
};


// define the insertion operator function
ostream& operator<< (ostream& out, const Complex& c)
{
    out << c.real << " + " << c.imag << "i";
    return out;
}

istream& operator>> (istream& in, Complex& c)
{
    // extract the real and imaginary parts from the input stream
    in >> c.real >> c.imag;
    // return the input stream
    return in;
}
int main()
{
    // create a Complex object
    Complex c(3, 4);
    /*we can assign it without " = overloading" and it will work */
    // use overloaded assign operator
    Complex d=c;

    // now print complex;
    cout<<d;
    return 0;
}
