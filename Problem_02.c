//
// Created by kuntal on 04-05-2021.
/**
  When static storage class is given, it is initialized once. The change in
the value of a static variable is retained even between the function calls. Main is also
treated like any other ordinary function, which can be called recursively.
 */
#include <stdio.h>
int main()
{
    static int var = 5;
    printf("%d ",var--);
    if(var)
        main();
}
