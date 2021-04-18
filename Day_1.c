// Created by KUNTAL OJHA RAJ on 10/28/2020.
#include <stdio.h>
int main() {
    int i = 4,j;
    double d = 4.0,e;
    char s[] = "HackerRank ";
    char input_string[105];
    scanf("%d%lf",&j,&e);
    scanf(" %[^\n]s",input_string);
    i=i+j;
    d=d+e;
    printf("%d\n",i);
    printf("%.1lf\n",d);
    printf("%s",s);
    puts(input_string);
    return 0;
}
