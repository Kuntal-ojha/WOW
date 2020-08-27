// Increment pre-Increment & post-Increment Example.
// Created by KUNTAL OJHA RAJ on 8/6/2020.
// Use i++,++i,i,i++;
#include <stdio.h>
int main()
{
    int i=3;
    // Hear work right to left & ++i it's gives final output, i++ gives immediately output.
    printf("%d %d %d %d",i++,++i,i,i++);
    // OutPut is : 5 6 6 3
}
