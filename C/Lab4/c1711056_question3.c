#include <stdio.h>
int main(void)
{
	int A[49],i,j,m;
	A[0]=0;
	for(i=0,j=1;i<=49;i++,j++)
		{
			A[j]=A[i]+j;
			
		}
	for(m=0;m<=49;m++)
		printf("A[%d]=%d	",m,A[m]);
	
	
	
	
	return(0);	
}
