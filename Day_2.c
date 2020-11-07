//
// Created by KUNTAL OJHA RAJ on 10/29/2020.
//
#include <stdio.h>
int main()
{
    int tipPercent,taxPercent,totalCost;
    double mealCost,tip,tax;
    scanf("%lf%d%d",& mealCost,& tipPercent,& taxPercent);
    tip=mealCost*tipPercent/100.0;
    tax=mealCost*taxPercent/100.0;
    totalCost=mealCost+tip+tax;
    printf("%d",totalCost);

}

