#include<stdio.h>
#define BINARY_NUMBER 2
#define TRIBLE_NUMBER 3

void  print_number_third_digit(int number)
{
    switch(number)
    {
    case(1):
        printf("one hundred ");
        break;
    case(2):
        printf("two hundred ");
        break;
    case(3):
        printf("three hundred ");
        break;
    case(4):
        printf("four hundred ");
        break;
    case(5):
        printf("five hundred ");
        break;
    case(6):
        printf("six hundred ");
        break;
    case(7):
        printf("seven hundred ");
        break;
    case(8):
        printf("eight hundred ");
        break;
    case(9):
        printf("nine hundred ");
        break;
    }
} // end print_number_third_digit(int number)
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
    int number,digit;
    char flag=BINARY_NUMBER;
    printf("Enter number:");
    scanf("%d",&number);
    printf("Amount Text : ");

    /* Handling the third digit */
    if(number > 100 && number < 1000)
    {
        digit=number/100; // get the third number
        print_number_third_digit(digit);
        number%=100; // keep the other two digits
        flag=TRIBLE_NUMBER;
        if( number != 0) printf("and ");


    }

    /* Handling the first two digits */
    if((number==0) )
    {
        if ( flag==BINARY_NUMBER) printf("zero"); // print zero in case the input number is 2 digits number. otherwise, don't print zero

    }
    else if( number<=10 && number>0)
    {

        print_number_first_digit(number);

    } // end if
    else if ( number<=20 && number>10 )
    {

        print_number_11_to_20(number);
    }//end else if ( (number<=20) && (number >10) )
    else if( number <100 && number>20 )
    {
        int digit=number/10; // get digit 2 out of the number
        if( digit != 0)
        {

            print_number_second_digit(digit);
        }
        digit=number%10; // get digit 1 out of the number
        if( digit != 0)
        {

            print_number_first_digit(digit);
        }

    } // end else if( (number >20) && (number <=100))
    else if ( 100==number) printf("a Hundred");
    else if ( 1000 == number) printf("One thousand");
    else printf("error .. number must not exceed 1000");

} // end main()
