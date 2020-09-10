// Question [H] (b)
// Created by KUNTAL OJHA RAJ on 9/10/2020.
// Write a program to receive values of latitude (L1,L2) and
// longitude (G1,G2), in degrees of two places on the earth and
// output the distance between them in nautical miles
// The formula for distance in nautical miles is :
// D=3963 acos(sin L1 sin L2+cos L1 cos L2*cos (G2-G1)
// Calculate distance between two Places in Nautical Miles.
#include <stdio.h>
#include <math.h>
int main()
{
    float lat1,lat2,lon1,lon2,d;
    printf("Enter Latitude and Longitude of Place 1:\n");
    scanf("%f%f",&lat1,&lon1);
    printf("Enter Latitude and Longitude of Place 2:\n");
    scanf("%f%f",&lat2,&lon2);

    lat1=lat1*3.14/180;
    lat2=lat2*3.14/180;
    lon1=lon1*3.14/180;
    lon2=lon2*3.14/180;
    d=3963*acos(sin(lat1)*sin(lat2)+cos(lat1)*cos(lat1)*cos(lat2)*cos(lon2-lon1));
    printf("Distance Between Place1 and Place2:%f",d);
}

