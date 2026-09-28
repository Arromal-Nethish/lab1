# include<stdio.h>
int main()
{
	float a;
	float b;
	float c;
	float d;
	float e;
	printf("ENTER YOUR PHYSICS MARK : ");
	scanf("%f",&a);
	printf("ENTER YOUR CHEMISTRY MARK : ");
	scanf("%f",&b);
	printf("ENTER YOUR MATHS MARK : ");
	scanf("%f",&c);
	printf("ENTER YOUR ENTERENCE MARK : ");
	scanf("%f",&d);
	e=(c/2)+(a/2)+(b/2)+d;
	
	printf("Cut of mark : %f",e);
	return 0;
	
	
}
