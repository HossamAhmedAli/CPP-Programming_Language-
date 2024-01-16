#include<iostream>
using namespace std;
int sum(int num1,int num2,int num3);
int sum(int num1,int num2);

int main(void)
{
    int n1, n2, n3;
    cout<<"Sum of two numbers"<<endl;
    cout<<"Enter number 1: ";
    cin>>n1;
    cout<<"Enter number 2: ";
    cin>>n2;
    cout<<"Sum of two numbers= "<<sum(n1,n2)<<endl;

    cout<<"Sum of three numbers"<<endl;
    cout<<"Enter number 1: ";
    cin>>n1;
    cout<<"Enter number 2: ";
    cin>>n2;
    cout<<"Enter number 3: ";
    cin>>n3;
    cout<<"Sum of two numbers= "<<sum(n1,n2,n3)<<endl;


    return 0;
}

int sum(int num1,int num2,int num3)
{
    return (num1+num2+num3);
}
int sum(int num1,int num2)
{
    return (num1+num2);
}
