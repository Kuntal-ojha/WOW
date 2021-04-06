// [D] Attempt the following
// Question e
/*
 * In digital world colors are specified in Red-Green-Blue (RGB) format,
 * with values of R,G,B varying on an integer scale form 0 to 255.
 * In print publishing the colors are mentioned in Cyan-Magenta-Yellow-Black (CMYK)
 * format, with values of C,M,Y,and,K varying on a real scale form 0.0 to 1.0
 * Write a program that convert RGB color to CMYK color as per the following formulae:
 * White=((white-Red/255)/White)
 * Magenta=((white-Green/255)/White)
 * Yellow=((white-Blue/255)/White)
 * Black=1-White
 * Note that if the RGB values are all 0, then the CYM
 * values are all 0 and the k value is 1
 */
// Created by KUNTAL OJHA RAJ on 1/29/2021.
#include <stdio.h>
int main()
{
    float Red,Green,Blue,Max;
    float White,Cyan,Magenta,Yellow,Black;
    printf("Enter the value Rade,Green and Blue:\n");
    scanf("%f%f%f",&Red,&Green,&Blue);
    if (Red==0 && Green==0 && Blue==0)
    {
        printf("Value of C=0 Y=0 M=0 and K=1");
    } else
    {
        if (Red>Green && Red>Blue)
        {
            Max=Red;
        } else if (Green>Red && Green>Blue)
        {
            Max=Green;
        } else
        {
            Max=Blue;
        }
        White=Max*((Red/255)+(Green/255)+(Blue/255));
        Cyan=(White-Red/25)/White;
        Magenta=((White-Green/255)/White);
        Yellow=((White-Blue/255)/White);
        Black=1-White;
    }
    printf("CMYK=%f %f %f %f\n",Cyan,Magenta,Yellow,Black);
    return 0;
}
