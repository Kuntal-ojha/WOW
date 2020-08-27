// use char in int
// Created by KUNTAL OJHA RAJ on 8/4/2020.
// I can't understand this example.
#include<stdio.h>
int main()
{
    char ch=200; // char can store 128 int so first store 128 then it 128+1=-127; 128+2=-126;
    printf("%d\n",ch);//(200-128)=72 so 128+72=-56
    // you can understand that 200-128=72 Now 72-128=-56 so answer is -56
    return 0;
}
