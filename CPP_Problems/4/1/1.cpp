#include<iostream>
#include <cstdlib>  // for rand() and srand()
using namespace std;
#define SUCCEED 1
#define FAILED -1
class BankAccount
{
private:
    int account_number;
    static int accounts_counter;
    float balance;
public:
    /* Constructors */
    BankAccount(float object_balance=0)
    {
        this->account_number=rand()& 0x7FFFFFFF; // to generate a positive random number
        this->balance=object_balance;
        this->accounts_counter++;
        cout<<" A new account has been created with the following info:"<<endl;
        cout<<"Account number: "<<this->account_number<<"  Balance: "<<this->balance<<"$"<<endl;
    }
    /* Interface Methods */
    void set_balance(float received_balance)
    {
        this->balance=received_balance;
    }//end set_balance()
    float get_balance()
    {
        return this->balance;
    }//end get_balance()
    int get_account_number()
    {
        return this->account_number;
    }//end get_account_number()
    void deposit(float money)
    {
        this->balance+=money;
        cout<<"Account: "<<this->account_number<<"  Deposit operation success"<<endl;
    }//end deposit()
    int withdraw(float money)
    {
        int ret;
      if(this->balance >= money)
      {
         this->balance-=money;
         ret=SUCCEED;
         cout<<"Account: "<<this->account_number<<"  Withdrawal operation success"<<endl;
      }
      else ret=FAILED;

      return ret;
    }//end withdraw()

};//end BankAccount class
int BankAccount::accounts_counter=0;
int main()
{
    int ret;
    BankAccount Ahmed_acc(500);
    Ahmed_acc.deposit(600);
    cout<<"new balance is : "<<Ahmed_acc.get_balance()<<endl;
    Ahmed_acc.withdraw(300);
    cout<<"new balance is : "<<Ahmed_acc.get_balance()<<endl;


    return 0;
}
