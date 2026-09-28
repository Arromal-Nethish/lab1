# include<stdio.h>
int main()
{	
	int a;
	int b;
	int c;
	int d;
	printf("ENTER HOURS:");
	scanf("%d",&a);
	printf("ENTER MINUTES:");
	scanf("%d",&b);
	printf("ENTER SECONDS:");
	scanf("%d",&c);
	d=(a*60*60)+(b*60)+c;
	printf("TOTAL SECONDS:%d",d);
	
	return 0;
}
