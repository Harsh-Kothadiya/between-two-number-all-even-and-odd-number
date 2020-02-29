//between two number all even and odd number
#include<stdio.h>
#include<conio.h>
void main()
{
	int n1,n2,a,b;
	printf("\n\n\t ENTER A STARTING NUMBER : ");
	scanf("%d",&n1);
	printf("\n\n\t ENTER AN ENDINING NUMBER : ");
	scanf("%d",&n2);
	
	if(n1%2==0)
	{
		a=n1+2;
		b=n1+1;
	}
	else
	{
		a=n1+1;
		b=n1+2;
	}
	printf("\n\n EVEN NUMBER BETWEEN %d AND %d",n1,n2);
	printf("\n\n");
	while(a<n2)
	{
		printf("\t%d",a);
		a=a+2;
	}
	
	printf("\n\n ODD NUMBER BETWEEN %d AND %d",n1,n2);
	printf("\n\n");
	while(b<n2)
	{
		printf("\t%d",b);
		b=b+2;
	}

	
	getch();
}
