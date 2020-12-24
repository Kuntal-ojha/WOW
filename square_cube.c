 #include <stdio.h>
int main(int argc, char** argv)
{
	int n,Square,Cube;
	printf("Enter Number:");
	scanf("%d",&n);
	Square=n*n;
	Cube=n*n*n;
	printf("\nSquare: %d\nCube: %d",Square,Cube);
	return 0;
}