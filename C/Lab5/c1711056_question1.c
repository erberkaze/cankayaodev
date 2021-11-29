//Eren Berk Saltaþ 201711056
#include <stdio.h>
int main(void)
{
	
	//initizilation
	int arr[4];
	int counter,temp,sortcounter,sortcounter2,i;
	int size=4;
	//input alým
	printf("Please input your array's members\n");
	for(counter=0;counter<=4;counter++)
		scanf("%d",&arr[counter]);
	//sýraya sokma
	for(sortcounter=0;sortcounter<=size;sortcounter++)
	{
		for(sortcounter2=sortcounter;sortcounter2<=size;sortcounter2++)
			{
				if(arr[sortcounter]>arr[sortcounter2])
				{
					temp=arr[sortcounter];
					arr[sortcounter]=arr[sortcounter2];
					arr[sortcounter2]=temp;
				}
			}
	}
	//print edip kontrol etme
	for(i=0;i<=4;i++)
		printf("%d	",arr[i]);
	
	return(0);
}
