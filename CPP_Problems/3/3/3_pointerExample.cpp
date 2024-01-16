/*
    if some members of the class are pointers, in some cases it is not safe.
    The problem shows up when passing the address of the object through the constructor
    of the new object. if I changed the value of complex numbers in the first number,
    it will affect the second number as well. so, in such a code implementation, such a
    problem will show up.
*/

#include<iostream>
using namespace std;

class Complex {
public:
    double* real;
    double* imag;

    Complex(Complex *ptr)
    {
        real=ptr->real;
        imag=ptr->imag;
    }
    // Constructor
    Complex(double r, double i) {
        real = new double(r);
        imag = new double(i);
    }


    // Destructor
    ~Complex() {
        delete real;
        delete imag;
    }

    void print() {
        cout << *real << " + " << *imag << "i" << endl;
    }
};

int main() {
    Complex* c1 = new Complex(3.0, 4.0);
    Complex* c2 = new Complex(*c1->real, *c1->imag); // Copy c1 into c2
    c1->print(); // Output: 3 + 4i
    c2->print(); // Output: 3 + 4i

    /* Now, creating a new complex number by passing the address of another object
       here a problem takes place as shown
    */
    Complex c3(c1); // passing the old object to a pointer to object in order to initialize
    c3.print(); // print
    // now change the c1 complex number
    *c1->real=5000;
    /* here is the problem */
    c3.print();

    delete c1;
    delete c2;
    return 0;
}
