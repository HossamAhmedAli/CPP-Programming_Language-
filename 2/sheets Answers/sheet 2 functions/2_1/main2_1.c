#include<stdio.h>
void iterative_convert_to_binary(int number);
void recursion_convert_to_binary(int number);
void main(void)
{
    int decimal;
    printf("Enter decimal number:");
    scanf("%d",&decimal);
    recursion_convert_to_binary(decimal);

}//end main()
void convert_to_binary(int number)
{
    while(number > 0)
    {
        printf("%d",number%2);
        number/=2;
    }//end while(number>0)
}//end iterative_convert_to_binary()

void recursion_convert_to_binary(int number)
{
    if(number > 0)
    {
        recursion_convert_to_binary(number/2);
        printf("%d",number%2);
    }//end if(number>0)

}// end recursion_convert_to_binary()
