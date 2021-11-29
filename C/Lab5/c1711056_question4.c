#include <stdio.h>
int main(void)
{
	//initizilation
	int inputcount,arraycheck,digitcounter=0,tekrarcheck,sum=0,sumct,arraycheck2,tekrarcheck2=1,i=0;
	int size=9;
	int arr[9],ikinciarr[9];
	//input alma
	do{
		
		printf("Please input your array's members");
		for (inputcount=0;inputcount<=9;inputcount++)
			scanf("%d	",&arr[inputcount]);
		//array kontrolü
		for(arraycheck=0;arraycheck<=size;arraycheck++)
		{
			for(arraycheck2=arraycheck;arraycheck2<=size;arraycheck2++)
				{
					if(arr[arraycheck]==arr[arraycheck2])
						digitcounter++;
				}
			ikinciarr[arraycheck]=(digitcounter-1);
			digitcounter=0;
		}
		//burada ayný mý diye baktým eðer ayný ise 2. bir arraye atayarak 0 ladým deðerini
		for(tekrarcheck=0;tekrarcheck<=size;tekrarcheck++)
			{
				tekrarcheck2=1;
				while(tekrarcheck2<=size)
				{
					if(arr[tekrarcheck]==arr[tekrarcheck2])
						ikinciarr[tekrarcheck2]=0;
					tekrarcheck2++;
				}
			
			}
		for(sumct=0;sumct<=size;sumct++)
			sum=sum+ikinciarr[sumct];
		printf("%d",sum);
		i++;
	}while(i<2);
	
	return(0);
}

