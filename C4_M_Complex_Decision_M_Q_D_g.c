// [D] Attempt the following
// Created by KUNTAL OJHA RAJ on 1/29/2021.
/*
 * The Body Mass Index (BMI) is defined as ratio of the weight of a person
 * (in kilograms) to the square of the height ( in meters). Write a program
 * that receives weight and height ,calculates the (BMI) and reports the BMI
 * category as per the following table:
 *          BMI Category       ||        BMI
 *
 *          Starvation ---------------- <15
 *          Anorexic ------------------ 15.1 to 17.5
 *          Underweight --------------- 17.6 to 18.5
 *          Ideal --------------------- 18.6 to 24.9
 *          Overweight ---------------- 25 to 25.9
 *          Obese --------------------- 30 to 30.9
 *          Morbidly Obese ------------ >=40
 */
// Determine BMI category
#include <stdio.h>
#include <math.h>
int main()
{
    float wt,ht,bmi;
   bmi=41;
    printf("Body Mass Index=%f\n",bmi);
    if (bmi<15)
        printf("BMI Category : Starvation\n");
    else if (bmi<=15.1 && bmi>=17.5)
    {
        printf("BMI Category : Anorexic\n");
    } else if (bmi<=17.6 && bmi>=18.5)
    {
        printf("BMI Category : Underweight\n");
    } else if (bmi<=18.6 && bmi>=24.9)
    {
        printf("BMI Category : Ideal\n");
    } else if (bmi<=25 && bmi>=25.9)
    {
        printf("BMI Category : Overweight\n");
    } else if (bmi<=30 && bmi>=30.9)
    {
        printf("BMI Category : Obese\n");
    } else
    {
        printf("BMI Category : Morbidly Obese\n");
    }
    return 0;
}
