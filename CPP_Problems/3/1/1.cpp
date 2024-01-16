#include <iostream>
using namespace std;

class Complex {
  private:
    double real, imag;
  public:
    // constructor
    Complex(double r = 0, double i = 0) {
      real = r;
      imag = i;
    }
    // overload the insertion operator
    friend ostream& operator<< (ostream& out, const Complex& c);
    friend istream& operator>> (istream& in, Complex& c);
};


// define the insertion operator function
ostream& operator<< (ostream& out, const Complex& c) {
  out << c.real << " + " << c.imag << "i";
  return out;
}

istream& operator>> (istream& in, Complex& c) {
  // extract the real and imaginary parts from the input stream
  in >> c.real >> c.imag;
  // return the input stream
  return in;
}
int main() {
  // create a Complex object
  Complex c(3, 4);
  // use the overloaded operator to output the object
  cout << c << endl;

  //create another complex and read it
  cout<<"Enter the new complex"<<endl;
  Complex D;
  cin >> D;

  // now printf the entered complex;
  cout<<D;
  return 0;
}
