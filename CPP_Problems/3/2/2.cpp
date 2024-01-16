#include <iostream>
using namespace std;
#include <cmath>

class Complex
{
private:
    int real;
    int img;
    int i_flag;
public:
    Complex(void)
    {
        this->real=0;
        this->real=0;
        this->i_flag=1;
    }
    Complex(int num_real,int num_img, int flag=0)
    {
        real=num_real;
        img=num_img;
        if(flag==0) i_flag=1;
        else i_flag=2;
    }
    int get_real()
    {
        return this->real;
    }//end get_real()
    int get_img()
    {
        return this->img;
    }//end get_img()
    int get_i()
    {
        return this->i_flag;
    }
    void set_real(int number)
    {
        this->real=number;
    }//end set_real()
    void set_img(int number)
    {
        this->img=number;
    }//end set_img()
    void set_i( int number)
    {
        this->i_flag=number;
    }

    void print_number(void)
    {
        if(i_flag==1)
            cout<<real<<"+"<<img<<"i"<<endl;
        else
            cout<<real<<"+"<<img<<"(i)^2"<<endl;
    }
    Complex operator +(Complex operand)
    {
        int real=this->real+operand.real;
        int imaginary=this->img+operand.img;
        return Complex(real,imaginary);
    }
    Complex operator -(Complex operand)
    {
        int real=this->real-operand.real;
        int imaginary=this->img-operand.img;
        return Complex(real,imaginary);
    }
    Complex operator *(Complex operand)
    {
        int real=(this->real*operand.real)-(this->img*operand.img);
        int imaginary=(this->real*operand.img)+(operand.real*this->img);
        return Complex(real,imaginary,0);
    }



};//end class Complex


int main()
{
    Complex number_1_(5,4);
    Complex number_2_(2,2);
    cout<<"first number= "; number_1_.print_number();
    cout<<"second number= "; number_2_.print_number();
    /* sum */
    cout<<"summation= ";
    Complex number_3_=number_1_+number_2_;
    number_3_.print_number();
    /* sub */
    cout<<"subtraction= ";
    Complex number_4_=number_1_-number_2_;
    number_4_.print_number();
    /* mul */
    cout<<"multiplication= ";
    Complex number_5_=number_1_*number_2_;
    number_5_.print_number();
    return 0;
}

