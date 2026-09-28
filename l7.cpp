# include<stdio.h>
int main()
{	
	int a;
	int b;
	printf("ENTER ANY NUMBER : ");
	scanf("%d",&a);
	printf("ENTER ANY NUMBER : ");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("NUMBERS ARE %d,%d",a,b);
	
	return 0;
}

