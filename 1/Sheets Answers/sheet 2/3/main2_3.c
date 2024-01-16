#include<stdio.h>

void  print_number_second_digit(int number)
{
    switch(number)
    {
    case(2):
        printf("twenty ");
        break;
    case(3):
        printf("Thirty ");
        break;
    case(4):
        printf("Fourty ");
        break;
    case(5):
        printf("Fifty ");
        break;
    case(6):
        printf("Sixty ");
        break;
    case(7):
        printf("Seventy ");
        break;
    case(8):
        printf("Eighty ");
        break;
    case(9):
        printf("Ninety ");
        break;
    }
} // end print_number_second_digit(int number)
void print_number_first_digit(int number)
{

    switch(number)
    {
    case(0):
        printf("zero");
        break;
    case(1):
        printf("one");
        break;
    case(2):
        printf("Two");
        break;
    case(3):
        printf("Three");
        break;
    case(4):
        printf("Four");
        break;
    case(5):
        printf("Five");
        break;
    case(6):
        printf("Six");
        break;
    case(7):
        printf("Seven");
        break;
    case(8):
        printf("Eight");
        break;
    case(9):
        printf("Nine");
        break;
    case(10):
        printf("Ten");
        break;
    }
}// end print_number_first_digit(int number)
void print_number_11_to_20(int number)
{
  switch(number)
        {
        case(11):
            printf("Eleven");
            break;
        case(12):
            printf("Twelve");
            break;
        case(13):
            printf("Thirteen");
            break;
        case(14):
            printf("Fourteen");
            break;
        case(15):
            printf("Fifteen");
            break;
        case(16):
            printf("sixteen");
            break;
        case(17):
            printf("Seventeen");
            break;
        case(18):
            printf("Eighteen");
            break;
        case(19):
            printf("Nineteen");
            break;
        case(20):
            printf("Twenty");
            break;
        }
}//end print_number_11_to_20(int number)
void main()
{
    int number;
    printf("Enter number:");
    scanf("%d",&number);
    printf("Amount Text : ");

    if( number<=10)
    {
        print_number_first_digit(number);

    } // end if
    else if ( number<=20 )
    {
        print_number_11_to_20(number);
    }//end else if ( (number<=20) && (number >10) )
    else if( number <100 )
    {
        int digit=number/10; // get digit 2 out of the number
        print_number_second_digit(digit);
        digit=number%10; // get digit 1 out of the number
        if( digit != 0) print_number_first_digit(digit);

    } // end else if( (number >20) && (number <=100))
    else if ( 100==number) // in case of 100
    {
        printf("Hundred");
    }
    else printf("error .. number must not exceed 100");

} // end main()
