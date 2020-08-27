// The main keyword is __attribute__((constructor))
// Created by KUNTAL OJHA RAJ on 8/5/2020.
// Hare i call a function before main.
#include <stdio.h>
void func1();
void func2();
// The main keyword is __attribute__((constructor))
void __attribute__((constructor)) func1(); // __attribute__((constructor)) It's use for call any function before main() function.
void __attribute__((constructor)) func2();// __attribute__((constructor)) It's use for call any function before main() function.
void func1()
{
    printf("Inside func1\n");
}
void func2()
{
    printf("Inside func2\n");
}
int main()
{
    printf("Inside main\n");
}