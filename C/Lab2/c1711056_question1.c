#include <stdio.h>
int main(void)
{
	int var;
	int *p1;
	printf("Please input integer value\n");
	scanf("%d",&var);
	p1=&var;
	printf("Result :");
	while(*p1<100)
	{
		if(*p1%2==0)
			printf("%d	",*p1);
		*p1=++(*p1);
		
	}
	return(0);
	
}
