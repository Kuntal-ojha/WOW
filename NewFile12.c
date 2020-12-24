#include <stdio.h>
int main(int argc, char** argv)
{
	int i,j,l,m,n,o;
	 printf("\nPlease enter your date of birth in this format (mm/dd/yyyy)\n");
    scanf("%d%d%d",&m,&n,&o);
    printf("\nyour dath of birth is (mm/dd/yyyy):%d/%d/%d",m,n,o);
	 printf("\nPlease enter today's date in this format (mm/dd/yyyy)\n");
    scanf("%d%d%d",&i,&j,&l);
    printf("\nToday's date is (mm/dd/yyyy):%d/%d/%d",i,j,l);
    if(i<m)
    	i=i+30;
    i=i-m;
    j=j+1;
    j=j-m;
    if(j<m)
    	j=j+12;
    j=j-m;
    l=l-1;
    l=l-o;
    printf("\nNow your AGE is (yyyy/mm/dd) %d years %d month %d days\n",l,i,j);
    
	return 0;
}