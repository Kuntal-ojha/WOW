#include <stdio.h>
int main(int argc, char** argv)
{
	float AREA,B,H;
	printf("Enter Base & Height:");
	scanf("%f%f",&B,&H);
	AREA=0.5*B*H;
	printf("Area of the Triengle is :%6.2f",AREA);
	return 0;
}