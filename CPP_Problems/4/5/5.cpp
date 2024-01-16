#include<iostream>
using namespace std;
class Date
{
private:
    int day;
    int month;
    int year;

public:
    Date()
    {
        day=0;
        month=0;
        year=0;
    }
    Date(int d, int m, int y)
    {
        if (isValidDate(d, m, y))
        {
            this->day   = d;
            this->month = m;
            this->year  = y;
        }
        else
            cout << "Invalid date!" << endl;
    }//end constructor

    bool isLeapYear(int year)
    {
        return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
    }

    bool isValidDate(int d, int m, int y)
    {
        if (y > 9999 || y < 1800) // range from 1800 t 9999
            return false;
        if (m < 1 || m > 12)    // we have 12 months only
            return false;
        if (d < 1 || d > 31)    // max 31 days a month
            return false;

        if (m == 2)
        {
            if (isLeapYear(y))
                return (d <= 29);
            else
                return (d <= 28);
        }

        if (m == 4 || m == 6 || m == 9 || m == 11)
            return (d <= 30);

        return true;
    }
    // print the format of Date
    void printDate()
    {
        cout << "Date: " << this->day << "/" << this->month << "/" << this->year << endl;
    }
    int get_year()
    {
        return this->year;
    }
    int get_month()
    {
        return this->month;
    }
    int get_day()
    {
        return this->day;
    }
    void set_day(int day)
    {
        this->day=day;
    }
    void set_month(int month)
    {
        this->month=month;
    }
    void set_year(int year)
    {
        this->year=year;
    }
};

class Employee
{
private:
    Date birthday;
    string name;
    int employeeID;
    double salary;


public:
    // Constructor
    Employee(string n, int id, double s, Date birth_day)
    {
        name = n;
        employeeID = id;
        salary = s;
        birthday=birth_day;
    }
    Employee()
    {
        name="Unknown!";
        employeeID=0;
        salary=0;
        birthday.set_day(0);
        birthday.set_month(0);
        birthday.set_year(0);
    }

    // Function to calculate and set salary based on performance
    void setSalary_onPerformance(float performance)
    {
        this->salary*=performance;
    }

    // Function to print employee details
    void printDetails()
    {
        cout << "Name: " << name << ", Employee ID: " << employeeID << ", Salary: " << salary<<", ";
        //cout<<birthday.get_year();
        birthday.printDate();
    }
}; //end class employee

int main()
{
    Date birthday(1,6,2006);
    Employee Hossam("Hossam",111,2600,birthday);
    Hossam.printDetails();
    return 0;
}

