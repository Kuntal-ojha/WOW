// Array Link: https://www.geeksforgeeks.org/arrays-in-c-cpp/
// Created by kuntal on 15-05-2021.
/** Declaration of Array
int a[a]={1,2,3}; // a is name of array
 | 1 | 2 | 3 |
 First index = 0
 Last Index = 2
 Size of Array = 3
 Value = 1 index 0
 Value = 2 index 1
 Value = 3 index 2
 --------------------------------
 int a[a]={1,1,1}; // a is name of array
 | 1 | 1 | 1 |
 First index = 0
 Last Index = 2
 Size of Array = 3
 Value = 1 index 0
 Value = 1 index 1
 Value = 1 index 2
*/
#include <stdio.h>
int main()
{
    int array[3]={1,2,3}; // array this is the name of Array.
    for (int i = 0; i < 6; i++) {
        printf(" First Array INDEX = [%d] And Value = [%d]\n",i,array[i]);
        /** Don't Confuse to see the output because
         * it show INDEX = [3] And Value = [3]
         * this out put in INDEX[3] . Don't confuse it's also a Garbage VALUE.
         * if you don't understand then use another compiler (online)
         *
        */
    }
    printf("\n\n");
    int a[3]={1,1,1}; // array this is the name of Array.
    for (int i = 0; i < 3; i++)
    {
        printf(" SECOND Array INDEX = [%d] And Value = [%d]\n",i,a[i]);
    }
    return 0;
}