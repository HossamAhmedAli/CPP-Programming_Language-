#include<stdio.h>
#include <stdlib.h>
#define digits_limit 5
void main()
{
    char ch; int counter=0;
    int f=1, number=0;
    while((ch=getch())!=13)
    {     /*   numbers input 0 to 9 */
        if(ch>='0' && ch<='9')
        {
            if(counter>=digits_limit)
            {
                printf("\a");

            }
            else
            {
                printf("%d",ch-'0');
                counter++;
            }//end else
        }//end if(ch>='0' && ch<='9')
        /* Backspace input to delete a digit */
        else if (ch==8)
        {
            printf("\b");
            printf(" ");
            printf("\b");
            counter--;

        }
        /* invalid input */
        else printf("\a");
    } // end while


}
