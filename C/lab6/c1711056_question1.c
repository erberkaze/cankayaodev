#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void findFrequency(int b[]);
int main(void)
{
	int arr[100],i,ikincilarr[100];
	time_t t;
	srand(time(NULL));
	for(i=0;i<100;i++)
		arr[i]=(rand()%10)+1;
	printf("SCORE\tFREQUENCY\tHISTOGRAM\n");
	
	findFrequency(arr);

	return(0);
}
void findFrequency(int b[])
{
	int i,j,count,max=0,l,ct=1,var;
	p1=&max;
	for(i=0;i<100;i++)
	{
		count=1;
		for(j=0;j<100;j++)
		{
			if(b[i]==b[j] && j<i)
				break;
			else if(b[i]==b[j] && i!=j)
				count++;
		}
		if(count>max)
			{
				max=count;
				var=i;
			}
		
		
		
		if(i<=j)
		{
			printf("%d\t%d\t\t",ct,count);
			ct++;
			for(l=0;l<count;l++)
				printf("*");
			printf("\n");
		}
	}
	printf("Mod value is %d.It occurred 13 times.",var,max);

}

