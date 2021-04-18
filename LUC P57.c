#include <stdio.h>
int main(int argc, char** argv)
{
	int m1,m2,m3,m4,m5,per;
	printf("Enter marks in 5 Subjects:");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	per=(m1+m2+m3+m4+m5)*100/500;
	if(per>=60)
		printf("First division\n");
	else
	{
		if(per>=50)
			printf("Secoubd division\n");
		else
		{
			if(per>=40)
				printf("Third division\n");
			else
			{
				printf("Fail\n");
			}
		}
	}
	return 0;
}