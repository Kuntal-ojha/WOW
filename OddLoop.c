// Execution of a loop an
// Created by KUNTAL OJHA RAJ on 7/12/2020.
// Example of Odd Loop.
#include <stdio.h>
int main()
{
    char another;
    int num;
    do {
        printf("Enter a number:");
        scanf("%d",&num);
        printf("square of %d is %d\n",num,num*num);
        printf("Want to enter another number y/n:\n");
      // fflush(stdin);
        scanf(" %c",&another);
    }while (another=='y');
    return 0;
}

