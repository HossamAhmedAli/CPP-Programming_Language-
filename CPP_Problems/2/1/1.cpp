#include <iostream>
#include <cmath>
using namespace std;
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
    Complex(int num_real,int num_img)
    {
        real=num_real;
        img=num_img;
        i_flag=1;
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
    Complex add( Complex received_object)
    {
        Complex temp_obj;
        temp_obj.real=received_object.real+this->real;
        temp_obj.img=received_object.img+this->img;
        return temp_obj;

    }
    Complex mul( Complex received_object)
    {
        Complex temp_obj;
        temp_obj.real=received_object.real*this->real;
        temp_obj.img=received_object.img*this->img;
        temp_obj.i_flag=2;
        return temp_obj;

    }
    void print_number(void)
    {
        if(i_flag==1)
            cout<<"Number is "<<real<<"+"<<img<<"i"<<endl;
        else
            cout<<"Number is "<<real<<"+"<<img<<"(i)^2"<<endl;
    }

};//end class Complex

Complex add_general( Complex ob1, Complex ob2)
{
    Complex temp_obj;
    temp_obj.set_real( ob1.get_real()+ob2.get_real() );
    temp_obj.set_img( ob1.get_img()+ob2.get_img() );
    temp_obj.set_i(1);
    return temp_obj;

}// end add_general()
Complex mul_general(Complex ob1, Complex ob2)
{
    Complex temp_obj;
    temp_obj.set_real( ob1.get_real()*ob2.get_real() );
    temp_obj.set_img( ob1.get_img()*ob2.get_img() );
    temp_obj.set_i(2);
    return temp_obj;

}

int main()
{
    Complex obj_1(5,6);
    Complex obj_2(10,8);
    Complex obj_3;
    Complex obj_4;

    obj_1.print_number();

    obj_2.print_number();


    obj_3=add_general(obj_1,obj_2);
    obj_3.print_number();

    obj_4=mul_general(obj_1,obj_2);
    obj_4.print_number();

    return 0;
}
