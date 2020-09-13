// Question [H] (i)
// Created by KUNTAL OJHA RAJ on 9/10/2020.
// Consider a Currency system in which there are notes of seven denominations,namely,
// Rs:1,Rs:2,Rs:5,Rs:10,Rs:50,Rs:100. If s sum of Rs: N is Entered through the keyboard,
// Write a program to compute the smallest number the keyboard, write a program to compute
// the smallest number of notes that will combine to give Rs: N.
#include <stdio.h>
int main()
{
    int Amount,Note_One,Note_Two,Note_Five,Note_Ten,Note_Fifty,Note_Hundred,Total_Note;
    scanf("%d",&Amount,printf("Enter the Amount:\n"));
    Note_Hundred=Amount/100;
    Amount=Amount %100;
    Note_Fifty=Amount/50;
    Amount=Amount %50;
    Note_Ten=Amount/10;
    Amount=Amount %10;
    Note_Five=Amount/5;
    Amount=Amount %5;
    Note_Two=Amount/2;
    Amount=Amount %2;
    Note_One=Amount/1;
    Amount=Amount %1;
    Total_Note=Note_One+Note_Two+Note_Five+Note_Ten+Note_Fifty+Note_Hundred;
    printf("Smallest Number of Notes:\n(%d+%d+%d+%d+%d+%d)=%d",Note_One,Note_Two,Note_Five,Note_Ten,Note_Fifty,Note_Hundred,Total_Note);
    printf("\nNumber of One Note:%d\nNumber of Two Note:%d\nNumber of Five Note:%d\nNumber of Ten Note:%d\nNumber of Fifty Note:%d\nNumber of Hundred Note:%d\n",Note_One,Note_Two,Note_Five,Note_Ten,Note_Fifty,Note_Hundred);
    printf("\nSmallest Number of Notes:%d",Total_Note);
    return 0;
}


