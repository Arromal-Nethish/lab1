# include<stdio.h>
int main()
{	
	float a;
	float b;
	float c;
	float d;
	printf("ENTER PRINCIPLE VALUE: ");
	scanf("%f",&a);
	printf("ENTER RATE : ");
	scanf("%f",&b);
	printf("ENTER TIME : ");
	scanf("%f",&c);
	d=(a*b*c/100);
	printf("SIMPLE INTEREST :  %f",d);
	return 0;
}
