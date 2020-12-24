#include <stdio.h>
int main(int argc, char** argv)
{
	int i,j,k,m,n,o;
	 printf("\nPlease enter your date of birth in this format (mm/dd/yyyy)\n");
    scanf("%d%d%d",&n,&m,&o);
    printf("\nyour dath of birth is (mm/dd/yyyy):%d/%d/%d\n",n,m,o);
	 printf("\nPlease enter today's date in this format (mm/dd/yyyy)\n");
    scanf("%d%d%d",&j,&i,&k);
    printf("\nToday's date is (mm/dd/yyyy):%d/%d/%d\n",j,i,k);
    if(i>=m)
    	i=i-m;
    else
	{
		if(i<m)
	  {
		i=i+30;
        i=i-m;
        n=n+1;
	  }
   	}
    if(j>=n)
	{
		j=j-n;
        k=k-o;
	}
	else
	{
		j=j+12;
		j=j-n;
		o=o+1;
		k=k-o;
	} 
	printf("\nNow your AGE is (yyyy/mm/dd) %d years %d month %d days\n",k,j,i);
    
	return 0;
}