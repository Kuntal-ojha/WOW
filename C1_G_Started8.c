// Exercise [F] (d)
// Created by KUNTAL OJHA RAJ on 9/11/2020.
// Temperature of a City in Fahrenheit degrees in input through the Keyboard.
// Write a program to covert this temperature into Centigrade degrees.
//----------------------------Knowledge----------------------------------
// F=C*(9/5)+32 or C=(32F-32)*5/9 Hear F= Fahrenheit & C= Celsius.
#include <stdio.h>
int main()
{
    float Fahrenheit, Celsius;
    printf("\nEnter the Temperature (F):\n");
    scanf("%f",&Fahrenheit);
    Celsius=5.0/9.0*(Fahrenheit-32);
    printf("Temperature in Centigrade:\n%f",Celsius);
    return 0;
}

