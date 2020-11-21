// [C] Attempt the following Question (k)
// Created by KUNTAL OJHA RAJ on 10/7/2020.
// Give the coordinates (x,y) of center of a circle and its radius, write a
// program that will determine whether a point lies inside the circle, on
// the circle or outside the circle (Hint: Use sqrt() and pow() function.)
#include <stdio.h>
int main()
{
    /*
     * Determine position of print with respect to a circle.
     * The center of the circle has been assumed to be at (0,0).
     */
    int x,y,r,dis,d;
    printf("\nEnter radius of circle and coordinates of point(x,y):");
    scanf("%d%d%d",&r,&x,&y);
    dis=x*x+y*y; // or use pow() function
    d=r*r;
    if (dis==d)
        printf("Point is on the circle\n");
    else
    {
        if (dis>d)
            printf("Point is outside the circle\n");
        else
            printf("Point is inside the circle\n");
    }
    return 0;
}

