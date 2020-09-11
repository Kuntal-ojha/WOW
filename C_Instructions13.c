// Question [H] (f)
// Created by KUNTAL OJHA RAJ on 9/10/2020.
// Wind chill factor is the felt ari temperature on Exposed skin due to wind.
// The Wind chill temperature is Always lower than the air temperature,
// And is calculated as per the following formula:
// wcf=35.74+0.6215t+(0.4275t-35.37)*v^0.16
// Where t is the temperature and v is the wind velocity. Write a program to receive
// values of t and v calculate wind chill factor.
#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
    float temperature,velocity,Wind_Chill_Factor;
    printf("\nEnter values of temperature and velocity:\n");
    scanf("%f%f",&temperature,&velocity);
    Wind_Chill_Factor=35.74+0.6215*temperature+(0.4275*temperature-35.37)*pow(velocity,0.16f);
    printf("Wind Chill Factor=%f",Wind_Chill_Factor);
    getch();
}
