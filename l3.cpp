# include<stdio.h>
int main()
{
	float a;
	float b;
	float c;
	float d;	
	printf("enter your BASIC SALARY: ");
	scanf("%f",&a);
	b=0.20*a;
	c=0.80*a;
	d=a+b+c;
	printf("your gross salary is: %f",d);
	return 0;

	

}
