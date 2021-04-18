 #include<stdio.h>
 int main()
 {
 	float SI,P,N,R;
 	printf("Enter the value of P,N And R:");
 	scanf("%f%f%f",&P,&N,&R);
 	SI=(P*N*R)/100;
 	printf("Simple interest= %6.4f",SI);
 	return 0;
 } 