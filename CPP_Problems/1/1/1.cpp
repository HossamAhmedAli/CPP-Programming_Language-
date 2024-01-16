#include<iostream>
using namespace std;
template<typename return_type>
return_type get_max( return_type num1, return_type num2 )
{
    if (num1>num2) return num1;
    else return num2;
}
int main(void)
{
    int num1,num2;
    float f_num1,f_num2;
    int ret;
    cout<<"please enter int number 1"<<endl;
    cin>>num1;
    cout<<"please enter int number "<<endl;
    cin>>num2;
     ret=get_max<int>(num1,num2);
    cout<<"Max="<<ret;

    return 0;
}
