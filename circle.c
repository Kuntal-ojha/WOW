//Circle area calculation program. 
#include <stdio.h>
int main(int argc, char** argv)
{
	float AREA,R;
	printf("Enter radus:");
	scanf("%f",&R);
	AREA=3.14*R*R;
	printf("Area of the given is :%6.2f\n",AREA); 
	// In this Program %6.2f are yse of print two value of float .
	//Example if the answer is 45.800000 then it Display 45.80 this is the use of %6.2f
	printf("Area of the given is :%f",AREA);
	return 0;
}