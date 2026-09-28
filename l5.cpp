# include<stdio.h>
int main()
{
	int a;
	int b;
	int c;
	printf("enter any number kutta : ");
	scanf("%d",&a);
	printf("enter any number kutta : ");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("a is %d \n",a);
	printf("b is %d \n",b);
	return 0;
}
