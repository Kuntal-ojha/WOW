// One more use of if  else statement
// Created by KUNTAL OJHA RAJ on 9/26/2020.
// Example 3.2 Q. In a company an employee is paid as under:
// If his basic salary is less than Rs.1500, than HRA=10% of basic salary and
// DA=90% of basic salary. If his salary is either equal to or above Rs.1500,then
// HRA=Rs.500 and DA=98% of basic salary. If the Employee's salary is input through
// the keyboard write a program to find his gross salary.
// Calculation of gross salary.
// Multiple Statements within if-else
#include <stdio.h>
int main()
{
    float bs,gs,da,hra;
    printf("Enter the basic salary:\n");
    scanf("%f",&bs);
    if (bs<1500)
    {
        hra=bs*10/100;
        da=bs*90/100;
    }
    else
    {
        hra=500;
        da=bs*98/100;
    }
    gs=bs+hra+da;
    printf("\nGross Salary=Rs.%f",gs);
    return 0;
}
