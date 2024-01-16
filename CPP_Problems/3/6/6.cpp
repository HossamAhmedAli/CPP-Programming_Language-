#include<iostream>
using namespace std;
class Teacher
{
private:
    float gpa;
public:
    Teacher(int t_gpa=0)
    {
        this->gpa=t_gpa;
    }
    friend float friend_gpa_Teacher(Teacher &object);
};//end class Teacher
/* friend function of Teacher Class*/
float friend_gpa_Teacher(Teacher &object)
{
    return object.gpa;
}
class Student
{
private:
    float gpa;
public:
    Student(int t_gpa=0)
    {
        this->gpa=t_gpa;
    }
    friend float friend_gpa_Student(Student &object);
};//end class Teacher
float friend_gpa_Student(Student &object)
{
    return object.gpa;
}
 int main(void)
 {
     Teacher teacher_ob(3.5);
     Student student_ob(4.5);
     if(friend_gpa_Student(student_ob) > friend_gpa_Teacher(teacher_ob)) cout<<"GPA of student is higher"<<endl;
     else if(friend_gpa_Student(student_ob) < friend_gpa_Teacher(teacher_ob)) cout<<"GPA of teacher is higher"<<endl;
     else cout<<"Both GPA are equal"<<endl;
 }

