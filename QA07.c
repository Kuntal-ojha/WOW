// Calculate Area of a Triangle
// Created by KUNTAL OJHA RAJ on 9/4/2020.
// Area of a Triangle =1/2*b*h or 0.5*b*h
#include <stdio.h>
#include <conio.h>
int main()
{
    float AREA,B,H;
    printf("Enter Base & Height:\n");
    scanf("%f%f",&B,&H);
    AREA=0.5*B*H;
    printf("Area of This Triangle is:\n%.2f",AREA);
    getch();
}

