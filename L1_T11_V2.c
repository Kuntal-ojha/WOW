// Use while((getchar()) !='\n');
// Created by kuntal on 05-07-2021.
#include <stdio.h>
int main()
{
    char name[40],gender;
    int age,id;
    puts("Enter name:");
    scanf("%[^\n]%*c",name);
    printf("%s",name);

    puts("\nEnter Id:");
    scanf("%d",&id);
    printf("%d",id);
    while (getchar()!='\n');

    puts("\nEnter gender: 'M' or 'F'");
    scanf("%c",&gender);
    printf("%c",gender);

    puts("\nEnter age:");
    scanf("%d",&age);
    printf("%d",age);
    return 0;
}