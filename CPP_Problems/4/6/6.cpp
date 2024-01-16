#include<iostream>
#include <algorithm>
using namespace std;
class Employee {
public:
    string name;
    int id;
    double salary;
    Employee()
    {
        name="Unknown";
        id=0;
        salary=0;
    }
    Employee(string name, int id, double salary) : name(name), id(id), salary(salary)
    {

    }
};

class EmployeeList {
private:
    static const int SIZE = 100;
    Employee* employees[SIZE];
    int count;
public:
    EmployeeList() : count(0) {}

    void addEmployee(Employee* employee) {
        if (count < SIZE) {
            employees[count++] = employee;
        }
    }
    void print_employess()
    {
        for( int iteration=0; iteration<count; iteration++)
        {
            cout<<" Employee number "<<iteration+1<<endl;
            cout<<"\tName: "<<employees[iteration]->name;
            cout<<"\tID: "<<employees[iteration]->id;
            cout<<"\tSalary: "<<employees[iteration]->salary;
            cout<<endl;
        }
    }//end print_employees()

    /* Algorithm to sort the employees according to ID */
    void sort_list()
    {
        for(int outer_iteration=0; outer_iteration<count; outer_iteration++)
        {
            Employee *minmum_emp=employees[outer_iteration];
            for(int inner_iteration=outer_iteration+1; inner_iteration<count; inner_iteration++)
            {
                if(minmum_emp->id > employees[inner_iteration]->id)
                {
                    minmum_emp=employees[inner_iteration];
                }
            }// end inner for
            Employee temp=*minmum_emp;
            *minmum_emp=*employees[outer_iteration];
            *employees[outer_iteration]=temp;


        }// end outer for
    }

    /*void sortEmployees() {
        std::sort(employees, employees + count,  { return a->salary < b->salary; });
    }*/
};

int main(void)
{
    EmployeeList emp_list;
    Employee Hossam("Hossam",25,1500);
    Employee Ahmed("Ahmed",18,1200);
    Employee Omar("Noor",32,1270);
    Employee Reham("Reham",9,2550);
    emp_list.addEmployee(&Hossam);
    emp_list.addEmployee(&Ahmed);
    emp_list.addEmployee(&Omar);
    emp_list.addEmployee(&Reham);
    emp_list.sort_list();
    cout<<"Sorted Employees list"<<endl;
    emp_list.print_employess();
}

