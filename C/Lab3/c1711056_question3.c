#include <stdio.h>
void digits(int a,int *ilkiki,int *soniki);
int basamak(int a);
int main(void)
{
	int a,b=1,c,d,l;
	printf("Please input 4 number integer");
	scanf("%d",&a);

	while(b)
	{
		
		l=basamak(a);
		if(l==4)
		{
			digits(a,&c,&d);
			printf("%d and %d",c,d);
			printf("Please input 4 number integer");
			scanf("%d",&a);
		}
		else
		{
			b=0;
		}

			
	}
	return(0);
}
int basamak(int a)
{
	int i=0;
	while(a)
	{
		a=a/10;
		i++;
	}
	return(i);
}
void digits(int a,int *ilkiki,int *soniki)
{
	int i,j;
	*ilkiki=0;
	*soniki=0;
		j=a%10;
		a=a/10;
		*soniki=(*soniki)+j;
		j=a%10;
		j=j*10;
		a=a/10;
		*soniki=(*soniki)+j;
		*ilkiki=a;

}



