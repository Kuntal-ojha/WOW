// Handling Multiple String
// Created by KUNTAL OJHA RAJ on 8/26/2020.
//  First Example of With 2D Array of Characters
#include <stdio.h>
#include <string.h>
#define FOUND 1
#define NOTFOUND 0
int main()
{
    char master_list[6][20]={
            "akshay",
            "param",
            "raman",
            "srinivas",
            "gopal",
            "rajesh"
    };
    int i,flag,a;
    char your_name[20];
    printf("Enter your name:\n");
    scanf("%s",your_name);
    flag=NOTFOUND;
    for (i=0;i<=5;i++)
    {
        a=strcmp(&master_list[i][0],your_name);
        if (a==0)
        {
            printf("Welcome, you can enter the palace\n");
            flag=FOUND;
            break;
        }
    }
    if (flag==NOTFOUND)
        printf("Sorry,you are a trespasser\n");
    return 0;
}

