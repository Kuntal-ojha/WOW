// Very Simple Example Bitwise Operators Example.
// Created by KUNTAL OJHA RAJ on 4/18/2021.
// Bitwise AND (&) Operator
/**  AND (&) Operator Truth Table.
 *      a  |  b | a&b
 * -------------------------
 *      0  |  0 |  0
 *      0  |  1 |  0
 *      1  |  0 |  0
 *      1  |  1 |  1
 */
// Bitwise OR (|) Operator
/**  OR (|) Operator Truth Table.
 *      a  |  b | a|b
 *-----------------------------
 *      0  |  0 |  0
 *      0  |  1 |  1
 *      1  |  0 |  1
 *      1  |  1 |  1
 */
// Bitwise XOR (^) Operator
/**  XOR (^) Operator Truth Table.
*      a  |  b | a^b
*-----------------------------
*      0  |  0 |  0
*      0  |  1 |  1
*      1  |  0 |  1
*      1  |  1 |  0
*/
#include <stdio.h>
int main() {
    int a,b,c,d,e;
    printf("Enter 1st number:\n");
    scanf("%d",&a);
    printf("Enter 2nd number:\n");
    scanf("%d",&b);
    c=a&b;
    d=a|b;
    e=a^b;
    printf("Bitwise AND (&) operation 1st and 2nd number is:\n%d",c);
    printf("\nBitwise OR (|) operation 1st and 2nd number is:\n%d",d);
    printf("\nBitwise XOR (^) operation 1st and 2nd number is:\n%d",e);
    // Very Impertinent Next two line.
    printf("\na&b && b+1 || 0 :\n%d",a&b && b+1 || 0);
    printf("\na&b && b+1 || 0  || b++ :\n%d",a&b && b+1 || 0 || b++);
    return 0;
}

