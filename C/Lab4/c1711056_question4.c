#include <stdio.h>
int main(void)
{
	int arr[9],i,j,smallest,secondsmallest;
	printf("Please input your array's 0 member\n");
	scanf("%d",&arr[0]);
	smallest=arr[0];
	secondsmallest=arr[0];
	
	for(i=1;i<=9;i++)
		{
			printf("Please input your array's %d member\n",i);
			scanf("%d",&arr[i]);
			if(arr[i]<smallest)
			{
				secondsmallest=smallest;
				smallest=arr[i];	
			}
			else if(arr[i]>smallest && arr[i]<secondsmallest)
			{
				secondsmallest=arr[i];
			}
			if(smallest==arr[0])
			{
				secondsmallest=arr[1];
				for(j=2;j<=9;j++)
				{
					if(arr[j]<secondsmallest)
						secondsmallest=arr[j];
				}
			}
		}
		printf("Smallest is:%d",smallest);
		printf("Second smallest is:%d",secondsmallest);
		return(0);
}
