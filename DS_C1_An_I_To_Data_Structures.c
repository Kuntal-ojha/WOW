//
// Created by KUNTAL OJHA RAJ on 1/13/2021.
//
#include <stdio.h>
#include <conio.h>
#define NULL 0
void main()
{
    int *ptr;
    int i,n,sum=0;
    float avg;
    printf("Enter the number of elements you want to store in the array:\n");
    scanf("%d",&n);
    ptr=(int*) malloc(n*sizeof (int)); // Dynamic memory allocation
    if (ptr==NULL) // Checking if request granted or not
    {
        printf("The required amount of memory is not available:\n");
        getch();
        exit(0);
    } else
    {
        printf("Enter the elements\n");
        for ( i = 0; i < n; i++)
                 scanf("%d",ptr+i);
            for  (i = 0; i < n; i++)
            {
                sum=sum+(*(ptr+i)); // Finding the sum of array elements.
            }
            printf("Sum of %d elements of array is=%d\n",n,sum);
            avg=sum/n;
            printf("The average of %d number of the array is %f",n,avg);
    }
    getch();
}

