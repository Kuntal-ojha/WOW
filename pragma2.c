// The main keyword is __attribute__((destructor))
// Created by KUNTAL OJHA RAJ on 8/5/2020.
// Hare i call a function After main.
#include <stdio.h>
void func1();
void func2();
// The main keyword is __attribute__((destructor))
void __attribute__((destructor)) func1(); // __attribute__((destructor)) It's use for call any function After main() function.
void __attribute__((destructor)) func2(); // __attribute__((destructor)) It's use for call any function After main() function.
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
