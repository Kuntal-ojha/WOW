// Array Link: https://www.geeksforgeeks.org/arrays-in-c-cpp/
// Created by kuntal on 15-05-2021.
/** Declaration of Array
 * int Array_one[3]={};
 * int Array_two[3]={0};
 * int Array_three[3]={1};
 */
#include <stdio.h>
int main()
{   int i=0,j=0,k=0,Array_one[3]={},Array_two[3]={0}, Array_three[3]={1};
    while (i<3)
    {
        printf(" Array_one INDEX = [%d] And Value = [%d]\n",i,Array_one[i]);
        i++;
    }
    printf("\n\n");
    while (j<3)
    {
        printf(" Array_two INDEX = [%d] And Value = [%d]\n",j,Array_two[j]);
        j++;
    }
    printf("\n\n");
    while (k<3)
    {
        printf(" Array_three INDEX = [%d] And Value = [%d]\n",k,Array_three[k]);
        k++;
    }

}