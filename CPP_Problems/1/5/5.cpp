#include<iostream>
using namespace std;
#define macro_get_max(x,y) (x)>(y)? x:y
inline int inline_get_max( int num1, int num2 )
{
    if (num1>num2) return num1;
    else return num2;
}
int main(void)
{
    int ret;
     ret=inline_get_max(2+2,4+5);
    cout<<"inline_get_max(2+2,4+5)="<<ret<<endl;
    ret=macro_get_max(2+2,4+5);
    cout<<"macro_get_max(2+2,4+5)="<<ret<<endl;
    return 0;
}

