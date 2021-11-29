#include <stdio.h>
void countMultiples(int a,int b,int *count);
int main(void)
{
	int i,max,divisor,counter=0;
	for(i=1;i<=2;i++)
	{	
		printf("Enter upper limit: ");
		scanf("%d",&max);
		printf("Enter divisor:");
		scanf("%d",&divisor);
		countMultiples(max,divisor,&counter);
		counter=0;	
		printf("%d integers can be divided by %d between 0 and %d\n",counter,divisor,max);
	}
	return(0);
}	
void countMultiples(int a,int b,int *count)
{
	int i;
	for(i=1;i<=a;i++)
	{
		if(i>=b && i%b==0)
			++(*count);
	}

}
