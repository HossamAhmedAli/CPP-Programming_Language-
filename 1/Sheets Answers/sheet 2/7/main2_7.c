/*
 calculate the income tax based on the income tax depend on the following table
        <=7000    ==>exempted
 >7000  <=20000   ==>10%
 >20000 <=45000   ==>15%
 >45000 <=200000  ==>20%
 >200000         ==>40%

*/
#define TAX_2 0.10
#define TAX_3 0.15
#define TAX_4 0.20
#define TAX_5 0.40
#define MAX_2 20000
#define MIN_2 7000
#define MAX_3 45000
#define MIN_3 20000
#define MAX_4 200000
#define MIN_4 45000
#define MIN_5 200000
#include<stdio.h>
void main(void)
{
    double salary, total_annual_salary, const_annaul_sal;
    unsigned int total_taxes=0;
    printf("Enter monthly salary: ");
    scanf("%lf",&salary);
    total_annual_salary=salary*12;
    const_annaul_sal=total_annual_salary; // constant annual salary



    if( const_annaul_sal<=7000) printf("No taxes .. your income is still the same");
    else
    {
        total_annual_salary-=7000;
    }
    /* The second layer    >7000  <=20000   ==>10%  */
    if( const_annaul_sal>7000 )
    {
        if(const_annaul_sal>20000) // if the annual_salary is above the second tax layer ( above 20k)
        {
            total_taxes+=((MAX_2 - MIN_2) * TAX_2);
            total_annual_salary-=(MAX_2 - MIN_2);
        }
        else if (const_annaul_sal<=20000 && const_annaul_sal>7000)
        {
            total_taxes+=( (total_annual_salary) *TAX_2);
        }

    } // end the third layer

    /* The third layer    >20000 <=45000   ==>15%  */
    if( const_annaul_sal>2000 )
    {
        if(const_annaul_sal>45000) // if the annual_salary is above the third tax layer ( above 45k)
        {
            total_taxes+=((MAX_3 - MIN_3) * TAX_3);
            total_annual_salary-=(MAX_3 - MIN_3);
        }
        else if (const_annaul_sal<=45000 && const_annaul_sal>20000)
        {
            total_taxes+=( (total_annual_salary) *TAX_3);
        }

    } // end the third layer

    /* The fourth layer    >45000 <=200000  ==>20%  */
    if( const_annaul_sal>45000 )
    {
        if(const_annaul_sal>200000) // if the annual_salary is above the third tax layer ( above 45k)
        {
            total_taxes+=((MAX_4 - MIN_4) * TAX_4);
            total_annual_salary-=(MAX_4 - MIN_4);
        }
        else if (const_annaul_sal<=200000 && const_annaul_sal>45000)
        {
            total_taxes+=( (total_annual_salary) *TAX_4);
        }

    } // end the third layer
    /* The fifth layer    >200000   ==>20%  */
    if( const_annaul_sal>200000)
    {
        total_taxes+=( (total_annual_salary) *TAX_5);
    } // end the fifth layer

    /* printing the result in case total annual income > 7000 */
    if(const_annaul_sal>7000)
    {
        printf("Total annual taxes=%d L.E\n", total_taxes);
        printf("taxes per month=%d L.E\n", total_taxes/12);
        printf("salary per month after taxes=%.1lf L.E\n",salary-(total_taxes/12));
    }


} // end main()
