# include<stdio.h>
int main()
{	
	int a;
	int b;
	int c;
	int d;
	printf("ENTER SECONDS: ");
	scanf("%d",&a);
	b=a/38600;
	c=(a%38600)/60;
	d=a%60;
	printf("HOURS : %d\n",b);
	printf("MINUTES : %d\n",c);
	printf("SECONDS : %d\n",d);
	
	
	return 0;
}
