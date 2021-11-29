#include <stdio.h>
void count(int *max,int *min,int *odd,int *even);
int main(void)
{  
	int maxv,minv,oddc,evenc;
	count(&maxv,&minv,&oddc,&evenc);
	printf("Minimum %d,Maximum %d\nEvens: %d,Odds :%d",minv,maxv,evenc,oddc);
	return(0);
}
void count(int *max,int *min,int *odd,int *even)
{
	int i=1,a,b,c;
	
	*max=0;
	*min=0;
	*odd=0;
	*even=0;
	printf("Please input number thx");	
	scanf("%d",&a);
	if (a%2==0)
		*even=(*even)+1;
	else
		*odd=(*odd)+1;
	c=a;
	*max=a;
	*min=c;
	while (i<10)
	{
		printf("Please input number thx");
		scanf("%d",&b);	
		if (b%2==0)
			*even=(*even)+1;
		else
			*odd=(*odd)+1;
		if (b>a)
			*max=b;
		else if(b<c)
			*min=b;
		i++;	
	}
}
