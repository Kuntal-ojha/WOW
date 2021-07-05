// Codding Challenge
// Created by kuntal on 05-07-2021.
#include <stdio.h>
#include <unistd.h>
int main()
{
    const float PI=3.14;
    float radius,area;
    puts("********************************");
    puts("-----------WELCOME-----------");
    puts("\n********************************\n");
    puts("Enter the radius of the circle in centimetres:");
    scanf("%f",&radius);
    puts("\n");
    puts("Calculating radius...");
    usleep(2000000);
    area=PI*radius*radius;
    printf("The area of the circle is %.2f sq. cm.",area);
    puts("\n**********************************");
    puts("-----------THANK YOU-----------");
    puts("**********************************");
    return 0;
}
