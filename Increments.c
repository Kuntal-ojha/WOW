// Modular Operators
// Created by KUNTAL OJHA RAJ on 12/31/2020.
//
#include <stdio.h>
int main()
{               int x,y;
                x=42;
                y=++x;
                /*
                * In this case,y is set to 43 as you would expect, because the
                * increment occurs before x is assigned to y. Thus, the line
                * y=++x;
                * is the equivalent of these two statements.
                * x=x+1;
                * y=x;
                */
                printf("x=42;\ny=++x;\n");
                printf("x =%d\ny =%d\n",x,y);
                x=42;
                y=x++;
                /*
                * The value of x is obtained before the increment operator is execute, so the
                * value of y is 42. Of course, in both cases x is set to 43. Here, the line
                * y=x++;
                * is the equivalent of these two statement.
                * y=x;
                * x=x+1;
                */
                printf("\n");
               printf("x=42;\ny=x++;\n");
              printf("x =%d\ny =%d",x,y);

    return 0;
}




