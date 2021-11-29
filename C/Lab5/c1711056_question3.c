#include <stdio.h>
void func(int arrabakan[],int size,int *p1);
int main(void)
{
	int arr[10],size,i,a;
	
	for(i=0;i<=9;i++)
	{
		printf("Please input integer");
		scanf("%d",&arr[i]);
	}

		
	func(arr,9,&a);
	printf("%d\n",a);
	return(0);
}
void func(int arrabakan[],int size,int *p1)
{
	int i,j,c=0,last;
	*p1=c;
	for(i=0;i<=size;i++)
	{
		c=0;
		for(j=0;j<=size;j++)
		{
			if(arrabakan[i]==arrabakan[j])
				c++;
			if(c>1)
			{
				*p1=arrabakan[i];	
				break;
			}
		
		}

	}



}

