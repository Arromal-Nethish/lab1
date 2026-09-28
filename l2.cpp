# include<stdio.h>
int main()
{	
	float a;	
	float b;
	float c;
	float d;
	float e;
	float sum;
	float p;
	printf("HELLO DA Kutta! \nENTER YOUR MATHS MARK KUTTA: ");
	scanf("%f",&a);
	printf("ENTER YOUR PHYSICS MARK KUTTA: ");
	scanf("%f",&b);
	printf("ENTER YOUR CHEMISTRY MARK KUTTA: ");
	scanf("%f",&c);
	printf("ENTER YOUR ENGLISH MARK KUTTA: ");
	scanf("%f",&d);
	printf("ENTER YOUR AI MARK KUTTA: ");
	scanf("%f",&e);
	sum=a+b+c+d+e;
	p=sum/5;
	printf("TOTAL MARK KUTTA : %f \n",sum);
	printf("KUTTAN'S PERCENTAGE : %f \n",p);
	printf("AND KUTTA HAPPY ONAM !!");
	return 0;

}
