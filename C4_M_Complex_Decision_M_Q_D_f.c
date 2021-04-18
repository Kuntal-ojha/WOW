// [D] Attempt the following
// Question f
/*
 * A certain of steel is graded according to the following conditions:
 * (i) Hardness must be greater than 50
 * (ii) Carbon content must be less then 0.7
 * (iii) Tensile strength must be greater then 5600
 * The grades are as follows:
 * Grade is 10 if all three conditions are met.
 * Grade is 9 if conditions(i) and (ii) are met.
 * Grade is 8 if conditions(ii) and (iii) are met.
 * Grade is 7 if conditions(i) and (iii) are met.
 * Grade is 6 if only one condition is met.
 * Grade is 5 if none of the conditions are met.
 *
 *  Write a program,which will require the user to give value of hardness,
 *  carbon content and tensile strength of the steel under consideration
 *  and output the grade of the steel.
 */
// Created by KUNTAL OJHA RAJ on 1/29/2021.
#include <stdio.h>
int main()
{

    int Hardness,Tensile_Strength;
    float Carbon_Content;
    printf("Enter the hardness of steel:\n");
    scanf("%d",&Hardness);
    printf("Enter the Carbon content:(Floating point)\n");
    scanf("%f",&Carbon_Content);
    printf("Enter the Tensile strength:\n");
    scanf("%d",&Tensile_Strength);
    if (Hardness>50 && Carbon_Content <0.7 && Tensile_Strength>5600)
    {
        printf("Grade is 10");
    } else if (Hardness>50 && Carbon_Content <0.7)
    {
        printf("Grade is 09");
    } else if (Carbon_Content <0.7 && Tensile_Strength>5600)
    {
        printf("Grade is 08");
    } else if (Hardness>50 && Tensile_Strength>5600)
    {
        printf("Grade is 07");
    } else if (Hardness>50 || Carbon_Content <0.7 || Tensile_Strength>5600)
    {
        printf("Grade is 06");
    } else
    {
        printf("Grade is 05");
    }
    return 0;
}

