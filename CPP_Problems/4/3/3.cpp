#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    string name;
    int employeeID;
    double salary;

public:
    // Constructor
    Employee(string n, int id, double s)
    {
        name = n;
        employeeID = id;
        salary = s;
    }

    // Function to calculate and set salary based on performance
    void setSalary_onPerformance(float performance)
    {
        this->salary*=performance;
    }

    // Function to print employee details
    void printDetails()
    {
        cout << "Name: " << name << ", Employee ID: " << employeeID << ", Salary: " << salary << endl;
    }
};

int main()
{
    Employee emp("Mohamed sameh", 105, 75000);
    emp.printDetails();

    // Let's say the employee got a performance rating of 0.8 this year
    emp.setSalary_onPerformance(.8);
    emp.printDetails();

    return 0;
}
