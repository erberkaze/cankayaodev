#include <stdio.h>
int main(void)
{
	int arr[9],temp,i,j,oteleme,k,l,o;
	
	for(i=0;i<=9;i++)
	{
		printf("Please input your arrays %d number :",i);
		scanf("%d",&arr[i]);		
	}
	printf("Please input how much do you want to rotate");
	scanf("%d",&oteleme);
	for(j=0;j<oteleme;j++)
	{
		temp=arr[0];
		for(k=0,l=1;k<=(9);k++,l++)
			arr[k]=arr[l];
		arr[9]=temp;	
	}
	return(0);			
}
