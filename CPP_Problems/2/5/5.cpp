#include<iostream>
#include <ctime>
#include <cstdlib>
#include <cstring>

using namespace std;
class Bank_account{
private:
    int acc_number;
    string acc_holder_name;
    float balance;


public:


    Bank_account(string name, float balance=0)
    {
        int random = rand(); // generate a random number
        this->acc_number=random & 0x7FFFFFFF ; // to make sure that the generated number is always positive
        this->acc_holder_name=name;
        this->balance=balance;
    }
    void deposit(float money)
    {
        this->balance+=money;
    }
    float get_balance()
    {
        return balance;
    }
    int get_acc_number()
    {
        return this->acc_number;
    }

    int withdraw(float money)
    {
        if (this->balance == 0)
            return -1;
        else{
             this->balance-=money;
             return 1;
            }
    }



};
int main()
{
  Bank_account Ahmed("Hossam");
  Ahmed.deposit(200);
  Ahmed.withdraw(20);
  cout<<"Account number: ";
  cout<<Ahmed.get_acc_number()<<endl;
  cout<<"balance= ";;
  cout<<Ahmed.get_balance()<<endl;



}
