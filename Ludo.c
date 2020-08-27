//
// Created by KUNTAL OJHA RAJ on 7/29/2020.
//
#include <stdio.h>
int main()
{
    int a;
    char name1[25];
    char name2[25];
    char name3[25];
    char name4[25];
    char name5[25];
    char name6[25];
    char name7[25];
    char name8[25];
    char name9[25];
    char name10[25];
    printf("Number of  players?(2 to 10)\n");
    scanf("%d",&a);
    if (a>=2&&a<=10)
    {
        switch (a) {
            case 10:
                printf("Enter 10th player name:\n");
                scanf("%s",name10);
            case 9:
                printf("Enter 9th player name:\n");
                scanf("%s",name9);
            case 8:
                printf("Enter 8th player name:\n");
                scanf("%s",name8);
            case 7:
                printf("Enter 7th player name:\n");
                scanf("%s",name7);
            case 6:
                printf("Enter 6th player name:\n");
                scanf("%s",name6);
            case 5:
                printf("Enter 5th player name:\n");
                scanf("%s",name5);
            case 4:
                printf("Enter 4th player name:\n");
                scanf("%s",name4);
            case 3:
                printf("Enter 3rd player name:\n");
                scanf("%s",name3);
            case 2:
                printf("Enter 2nd player name:\n");
                scanf("%s",name2);
            case 1:
                printf("Enter 1st player name:\n");
                scanf("%s",name1);

        }
    }
    else
        {
        printf("Please Enter valid Number of players\n");
             main();
    }
    if (a==2)
    {

        printf("1st player name:%s\n",name2);
        printf("2nd player name:%s\n",name1);
    } else if (a==3)
    {
        printf("1st player name:%s\n",name3);
        printf("2nd player name:%s\n",name2);
        printf("3rd player name:%s\n",name1);
    } else if (a==4)
    {
        printf("1st player name:%s\n",name4);
        printf("2nd player name:%s\n",name3);
        printf("3rd player name:%s\n",name2);
        printf("4th player name:%s\n",name1);
    } else if (a==5)
    {
        printf("1st player name:%s\n",name5);
        printf("2nd player name:%s\n",name4);
        printf("3rd player name:%s\n",name3);
        printf("4th player name:%s\n",name2);
        printf("5th player name:%s\n",name1);
    } else if (a==6)
    {
        printf("1st player name:%s\n",name6);
        printf("2nd player name:%s\n",name5);
        printf("3rd player name:%s\n",name4);
        printf("4th player name:%s\n",name3);
        printf("5th player name:%s\n",name2);
        printf("6th player name:%s\n",name1);
    } else if (a==7)
    {
        printf("1st player name:%s\n",name7);
        printf("2nd player name:%s\n",name6);
        printf("3rd player name:%s\n",name5);
        printf("4th player name:%s\n",name4);
        printf("5th player name:%s\n",name3);
        printf("6th player name:%s\n",name2);
        printf("7th player name:%s\n",name1);
    } else if (a==8)
    {
        printf("1st player name:%s\n",name8);
        printf("2nd player name:%s\n",name7);
        printf("3rd player name:%s\n",name6);
        printf("4th player name:%s\n",name5);
        printf("5th player name:%s\n",name4);
        printf("6th player name:%s\n",name3);
        printf("7th player name:%s\n",name2);
        printf("8th player name:%s\n",name1);
    } else if (a==9)
    {
        printf("1st player name:%s\n",name9);
        printf("2nd player name:%s\n",name8);
        printf("3rd player name:%s\n",name7);
        printf("4th player name:%s\n",name6);
        printf("5th player name:%s\n",name5);
        printf("6th player name:%s\n",name4);
        printf("7th player name:%s\n",name3);
        printf("8th player name:%s\n",name2);
        printf("9th player name:%s\n",name1);
    } else if (a==10)
    {
        printf("1st player name:%s\n",name10);
        printf("2nd player name:%s\n",name9);
        printf("3rd player name:%s\n",name8);
        printf("4th player name:%s\n",name7);
        printf("5th player name:%s\n",name6);
        printf("6th player name:%s\n",name5);
        printf("7th player name:%s\n",name4);
        printf("8th player name:%s\n",name3);
        printf("9th player name:%s\n",name2);
        printf("10th player name:%s\n",name1);
    }

    return 0;
}