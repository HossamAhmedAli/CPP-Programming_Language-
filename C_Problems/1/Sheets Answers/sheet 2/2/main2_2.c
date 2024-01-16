/*
 Write a program get the student mark and print grad depend of table
 <50      ==> fail
 >=50 <65 ==> pass
 >=65 <80 ==> good
 >=80 <90 ==> very good
     >=90 ==> Excellent


*/

#include<stdio.h>

void main( void )
{
    int student_mark;
    printf("Enter Student mark:");
    scanf("%d",&student_mark);
    printf("Grade is ");
    if      ( student_mark <50 && student_mark>0)   printf("Fail!!");
    else if ( student_mark>=50 && student_mark<65 ) printf("pass!"); // else if( student_mark<50) will accept negative marks
    else if ( student_mark>=65 && student_mark<80 ) printf("Good!");
    else if ( student_mark>=80 && student_mark<90 ) printf("Very Good!");
    else if ( student_mark>=90 && student_mark <=100 ) printf("Excellent!");
    else printf("Error! .. mark must be within 1 to 100");


}
