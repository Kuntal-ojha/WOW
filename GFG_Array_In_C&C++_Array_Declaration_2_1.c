// Array Link: https://www.geeksforgeeks.org/arrays-in-c-cpp/
// Created by kuntal on 15-05-2021.
/** Declaration of Array
 * int Array_one[3]={};
 * int Array_two[3]={0};
 * int Array_three[3]={1};
 */
#include <stdio.h>
int main()
{
    int Array_one[3]={};
    int Array_two[3]={0};
    int Array_three[3]={1};
    for (int i=0; i < 3; ){
        printf(" Array_one INDEX = [%d] And Value = [%d]\n",i,Array_one[i]);
        if(i==2){
            for (int j=0; j < 3; ){
                printf(" Array_two INDEX = [%d] And Value = [%d]\n",j,Array_two[j]);
                if(j==2){
                    for (int k=0; k <3 ; k++){
                        printf(" Array_three INDEX = [%d] And Value = [%d]\n",k,Array_three[k]);
                    }
                }
                j++;
            }
        }
        i++;
    }
}