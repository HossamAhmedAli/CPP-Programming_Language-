#include <iostream>
using namespace std;

class Date
{
    int day;
    int month;
    int year;

public:
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
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }
};

int main()
{
    Date date(29, 2, 2020);
    date.printDate();
    return 0;
}
