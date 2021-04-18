// Write a program to developed Linear Search
// Created by KUNTAL OJHA RAJ on 12/27/2020.
// Data Structure Searching program ( Linear Searching)
#include <stdio.h>
void Linear_Search(int[],int,int);
int main()
 {
    int x[50],i,n,item;
    printf("Enter the number of elements<50:\n");
    scanf("%d",&n);
    printf("Enter the value:\n");
     for (i=0;i<n;i++)
     {
        scanf("%d",&x[i]);
     }
     printf("Enter the search element:");
     scanf("%d",&item);
     Linear_Search(x,n,item);
 }
void Linear_Search(int x[],int n,int item)
{
    int i;
    for (i=0;i<n;i++)
    {
        if (x[i]==item)
        {
            printf("\nThe search is SUCCESSFUL.\nThe element is found at the position %d.\nThe element is %d",(i+1),item);
            break;
        }
    }
    if (i==n)
    {
        printf("\nThe search is UNSUCCESSFUL.");
    }
}
