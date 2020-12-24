#include <stdio.h>
int main(int argc, char** argv)
{   
	int i,j,l,m,n,o;
	printf("\nEnter the date of birth in this format (mm/dd/yyyy:)\n");
    printf("\nEnter your birth month:\n");
    scanf("%d",&i);
	if(i<=13)
	{
		printf("\nEnter your birth month:\n");
	}
    else
	{
		if(i<=99)
	printf("\nPlease Enter your birth month: Not day\n");
     else
        {
	printf("\nPlease Enter your birth month: Not yers\n");
		}
       if(i>=13)
		{
			printf("\nEnter your birth month:\n");
	scanf("%d",&i);
		}
	
	}
	printf("\nEnter your day of birth:\n");
    scanf("%d",&j);
   // if(i=1&&3&&5&&7&&8&&10&&12,j=31)
//	{
		
//	}
    
    	
    printf("\nEnter your birth year:\n");
    scanf("%d",&l);
    printf("Your date of birth is (mm/dd/yyyy) :%d/%d/%d",i,j,l);

    printf("\nPlease enter today's date in this format (mm/dd/yyyy)\n");
    scanf("%d%d%d",&m,&n,&o);
    printf("\nToday's date is (mm/dd/yyyy):%d/%d/%d",m,n,o); 
	return 0;
}