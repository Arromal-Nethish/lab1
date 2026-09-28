#include <stdio.h>

int main()
{
    int a,b,c,max;
    printf("ENTER ANY NUMBER : ");
    scanf("%d",&a);
    printf("ENTER ANY NUMBER : ");
    scanf("%d",&b);
    printf("ENTER ANY NUMBER : ");
    scanf("%d",&c);
    if(a>b){
    	if(a>c)
    		max=a;
    	else
    		max=c;}
    else{
	
    	if(b>c)
    		max=b;
    	else
    		max=c;
	printf("MAX NUMBER IS %d",max);
    return 0;
	
	}
    

    return 0;
}
