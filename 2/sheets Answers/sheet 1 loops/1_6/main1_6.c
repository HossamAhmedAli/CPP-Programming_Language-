/*
    convert decimal into any base depending on the base got from the user
*/
void binary_conversion(int number);
void hex_conversion(int number);
void oct_conversion(int number);
void main(void)
{
    int number,base;
    printf("Enter the number: ");
    scanf("%d",&number);

    printf("Please enter the base system number: ");
    scanf("%d",&base);
    while(base!=2 && base!=8 && base!=16)
    {
        printf("Error!..please note that valid bases are binary(2) or hex(16) or oct(8)\n");
        printf("Please enter the base system number: ");
        scanf("%d",&base);
    }

    switch(base)
    {
    case (2):
        binary_conversion(number);
        break;
    case (16):
        hex_conversion(number);
        break;
    case (8):
        oct_conversion(number);
        break;
    }//end switch

}//end main()

void binary_conversion(int number)
{
    if(number>0)
    {
        binary_conversion(number/2);
        printf("%d",number%2);
    }
}// end binary_conversion()

void hex_conversion(int number)
{
    int reminder;
    if(number>0)
    {
        hex_conversion(number/16);
        reminder=number%16;
        if(reminder>=0 && reminder<=9) printf("%d",reminder);
        else
        {
            switch(reminder)
            {
            case (10):
                printf("A");
                break;
            case (11):
                printf("B");
                break;
            case (12):
                printf("C");
                break;
            case (13):
                printf("D");
                break;
            case (14):
                printf("E");
                break;
            case (15):
                printf("F");
                break;
            } // end switch
        } // end else
    }//end if(n>0)
} // end function hex_conversion()

void oct_conversion(int number)
{
    if(number>0)
    {
        oct_conversion(number/8);
        printf("%d",number%8);
    }
}
