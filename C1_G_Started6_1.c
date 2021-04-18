// Exercise [F] (b)
// Created by KUNTAL OJHA RAJ on 9/11/2020.
// The Distance between two cities (in k.m) is input through the Keyboard.
// Write a program to convert and print this distance int meters,feet,inches and centimeters.
/*
  --------------------------FrameWork------------------------------
 * 1. Cities distance (in k.m) input Through the keyboard.
 * 2. We need to convert miters, feet, inches and Centimeters with k.m because our input is k.m.
 * */
#include <stdio.h>
int main()
{
    float km,m,cm,foot,inches;
    printf("\nEnter the distance  between two cites in (k.m):\n");
    scanf("%f",&km);
    m=km*1000;
    cm=m*100;
    inches=cm/2.5; // Or you can use 0.394*cm
    foot=inches/12;
    printf("Distances in Meters=%f\n",m);
    printf("Distances in Centimeters=%f\n",cm);
    printf("Distances in Inches=%f\n",inches);
    printf("Distances in Foot=%f\n",foot);
    return 0;
}

