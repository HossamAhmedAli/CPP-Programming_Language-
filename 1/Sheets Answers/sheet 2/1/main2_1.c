/* Write a program determine number positive negative or zero*/
#include<stdio.h>

void main( void )
{
   int input_number;
   printf("Enter the number :");
   scanf("%d",&input_number);
   if(input_number >0) printf("Number is positive");
   else if ( input_number <0) printf("Number is Negative");
   else printf("Number is zero");
}
