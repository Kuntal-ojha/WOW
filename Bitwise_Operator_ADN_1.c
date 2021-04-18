// Very Simple Example Bitwise AND (&) Operator.
// Bitwise Operator (&)
// Created by KUNTAL OJHA RAJ on 4/18/2021.
/**  AND (&) Operator Truth Table.
 *      a  |  b | a&b
 * -------------------------
 *      0  |  0 |  0
 *      0  |  1 |  0
 *      1  |  0 |  0
 *      1  |  1 |  1
 */
#include <stdio.h>
int main() {
    int a,b,c;
    printf("Enter 1st number:\n");
    scanf("%d",&a);
    printf("Enter 2nd number:\n");
    scanf("%d",&b);
    c=a&b;
    printf("Bitwise operation 1st and 2nd number is:\n%d",c);
    return 0;
}

