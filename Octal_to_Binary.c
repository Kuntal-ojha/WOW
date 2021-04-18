//
// Created by KUNTAL OJHA RAJ on 12/11/2020.
//
#include <stdio.h>
int main()
{
    int a,b,i,j;
    char ZERO[]="000";
    char ONE[]="001";
    char TWO[]="010";
    char THREE[]="011";
    char FORE[]="100";
    char FIVE[]="101";
    char SIX[]="110";
    char SEVEN[]="111";
    printf("Enter a OCTAL number it's will give you the BINARY number:\n");
    scanf("%d",&a);
    if (a<=77777)
    {
        for (i =2; i <a; i++) {
            a=a%10;
            b=a;
            printf("%d",a);
            for (int j = 1; j < b; ++j) {
                b=b-10;
            }
            a=b;
        }
    }
   else
       printf("Your enter number is greater then  77777.");
}
