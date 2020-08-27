// Use of #if #else #endif
// Created by KUNTAL OJHA RAJ on 8/5/2020.
// Use #define INTEL
#include <stdio.h>
#define INTEL 5
int main()
{
#if INTEL < 5
    printf("I am in #if Part\n");
    printf("..And me also.\n");
#else
    printf("I am in #else Part\n");
    printf("..And me also else part.\n");
#endif // this is the end statement.
}