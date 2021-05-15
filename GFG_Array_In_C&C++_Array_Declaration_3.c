// Array Link: https://www.geeksforgeeks.org/arrays-in-c-cpp/
// Created by kuntal on 15-05-2021.
/** Declaration of array
 * Array declaration by specifying size
 * int Array_one[10];
 * Another way to declaration.
 * With recent C/C++ versions, we can also
 * declare an array of user specified size
 * int n=10;
 * int Array_two[n]; // This is another way to declare of a array
 */
#include <stdio.h>
int main()
{
    int n=0,i=0,j=0;
    printf("Enter the Size of Array_two\n");
    scanf("%d",&n);
    int Array_one[10];
    int Array_two[n];
    while (i<n)
    {
        printf("Enter the value of Index[%d]\n",i);
        scanf("%d",&Array_two[i]);
        i++;
    }
    while (j<n)
    {
        printf("Array_two Index[%d] And Value[%d]\n",j,Array_two[j]);
        j++;
    }
    return 0;
}