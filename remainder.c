// use of % (remainder) and how to print % (remainder)
#include <stdio.h>
int main(int argc, char** argv)
{
	int i,j,k,l,m,n;
	i=3+2%5;
	j=2%5;// rule of %(remainder) a%b=a if(a<b)
	k=5%2;
	l=5%5;
	m=3%5;//yse of % remainder 
	n=5%3;
	printf("%d\n",i);
	printf("%d\n",j);
	printf("%d\n",k);
	printf("%d\n",l);
	printf("%d\n",m);
	printf("%d\n",n);
	printf("%%");// this is thhe prosses of print % remainder
	return 0;
}