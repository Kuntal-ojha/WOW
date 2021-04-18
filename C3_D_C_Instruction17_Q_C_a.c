// [C] Attempt the following Question (a)
// Created by KUNTAL OJHA RAJ on 9/27/2020.
// If cost price and selling price of an item are input through the keyboard,
// write a program to  determine whether the seller has made profit or incurred loss.
// Also determine how much profit he made or loss he incurred.
#include <stdio.h>
int main()
{
    float cost_price,selling_price,profit,loss;
    printf("\nEnter cost price and selling price:\n");
    scanf("%f%f",&cost_price,&selling_price);
    profit=selling_price-cost_price; /* Profit = selling price-cost price */
    loss=cost_price-selling_price; /* loss = cost price - selling price */
    if (profit>0)
        printf("Seller has made a profit of Rs:%f",profit);
    else if (loss>0)
        printf("Seller is in loss by Rs:%f",loss);
    else
        printf("There is no loss no profit\n");
    return 0;
}
