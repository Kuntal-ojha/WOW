// The  keyword is __attribute__((constructor))
// It's use for call any function before main() function.
// Created by KUNTAL OJHA RAJ on 8/6/2020.
// one more keyword is __attribute__((destructor))
// It's use for call any function After main() function.
#include <stdio.h>
void func1();
void func2();
void __attribute__((constructor)) func1(); // __attribute__((constructor)) It's use for call any function before main() function.
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
