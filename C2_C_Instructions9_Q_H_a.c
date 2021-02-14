// Question [H] (a)
// If a Five-digit number is input through the keyboard,write a program to Calculate the Sum of its digits.
// (Hint: Use the modulus operator '%'
// Created by KUNTAL OJHA RAJ on 9/8/2020.
// Sum of Digits of a 5 digits Numbers
#include <stdio.h>
int main()
{
    int num,a,n;
    // Initialise to Zero Otherwise it will contain a garbage value.
    int sum=0;
    printf("Enter a 5 Digit Number:(Less Than 32767)\n");
    scanf("%d",&num);
    a=num%10; // Last digit extracted as remainder
    n=num/10; // Remaining digits
    sum=sum+a; // Sum update with addition of Extracted digit.

    a=n%10; // 4 Digit
    n=n/10;
    sum=sum+a;

    a=n%10; // 3 Digit
    n=n/10;
    sum=sum+a;

    a=n%10; // 2 Digit
    n=n/10;
    sum=sum+a;

    a=n%10; // 1 Digit
    sum=sum+a;

    printf("The sum of the 5 digits of %d is %d",num,sum);
    return 0;
}

