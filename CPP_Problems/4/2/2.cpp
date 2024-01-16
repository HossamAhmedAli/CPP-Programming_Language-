#include <iostream>
using namespace std;

class Triangle
{
private:
    int side1, side2, side3;
public:
    // Constructor
    Triangle(int rec_side1=0, int rec_side2=0, int rec_side3=0)
    {
        if((rec_side1==0) || (rec_side2==0) || (rec_side3==0) )
        {
            cout<<"Warning!! .. No side of the triangle must not equal 0 ";
        }//end if
        else
        {
            this->side1 = rec_side1;
            this->side2 = rec_side2;
            this->side3 = rec_side3;
        }//end else
    }//end constructor


    // Function to check if triangle is equilateral
    bool isEquilateral()
    {
        if(side1 == side2 && side2 == side3)
            return true;
        else
            return false;
    }//end isEquilateral()

    // Function to check if triangle is isosceles
    bool isIsosceles()
    {
        int ret=false;
        /* Test if two sides are equal and the third not equal*/
        if( (side1==side2) && (side3 != side1) )
            ret=true;
        else if( (side1==side3) && (side2 != side1) )
            ret=true;
        else if( (side2==side3) && (side1 != side2) )
            ret=true;

        return ret;
    }//end isIsosceles()

    // Function to check if triangle is scalene
    bool isScalene()
    {
        if(side1 != side2 && side1 != side3 && side2 != side3)
            return true;
        else
            return false;
    }//end isScalene()
};//end class Triangle

int main()
{
    Triangle t1(3, 3, 3);
    Triangle t2(3, 3, 4);
    Triangle t3(3, 4, 5);
    int ret=t1.isEquilateral();
    if(ret== 1) cout<<"t1 is Equilateral"<<endl;
    else cout<<"t1 is not Equilateral"<<endl;
    ret=t2.isIsosceles();
    if(ret== 1) cout<<"t2 is Isosceles"<<endl;
    else cout<<"t2 is not Isosceles"<<endl;
    ret=t3.isScalene();
    if(ret== 1) cout<<"t3 is Scalene"<<endl;
    else cout<<"t3 is not Scalene"<<endl;

    return 0;
}
