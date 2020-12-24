// Hear i use a Conditional Ternary Operator.
// Created by KUNTAL OJHA RAJ on 12/8/2020.
// The conditional operators ? and : are sometimes called TERNARY operators
// since they take three Argument. In fact, they form a kind of
// foreshortened if-then-else. Their general form is:
// expression 1 ? expression 2 : expression 3
/*
 * What this expression says is: "If expression1 is true
 * (that is, if its value is non-zero),then the value returned will be
 * expression 2, otherwise the value returned will be expression 3"
 * Let us understand this with the help of a few examples.
 */
#include <stdio.h>
int main()
{
    int x,a=10,c=2;
    x=a>c?4:7;
    printf("%d",x);
    return 0;
}
