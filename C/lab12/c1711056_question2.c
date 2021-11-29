#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void)
{
	//initialization 
	FILE *fin;
	int i , k = 0 , sec1=0 , sec2=0 , totalsec=0 , j , m = 0 ,h , p = 0 , max = 0;
	char arr[30] , saniye[30] , saniye2[30] , seconds[30] , kazanan[30] , isim[30];
	
	
	fin = fopen("atlet.txt","r");
	
	fgets(arr,30,fin);
	while(!feof)
	{
		for(i = 0 ; arr[i] != ':' ; i++)
		{
			if(arr[i] >= '0' && arr[i] <= '9')
			{
				saniye[k] = arr[i];
				k++;
			}
		}
	
		sec1 =60 *(atoi(saniye));
		k = 0;
	
		for(j = i ; arr[j] != '\0' ; j++)
		{
			if(arr[j] >= '0' && arr[j] <= '9')
			{
				saniye2[k] = arr[j];
			}
		}
		sec2 =atoi(saniye2);
	
		totalsec = sec1 + sec2;
		seconds[m] = totalsec;
		
		m++;
		
		for(h = 0 ; arr[h] != ' ' ; h++)
		{
			isim[p] = arr[h];
			p++;
		}
		isim[p] = '\0';
		
		if(totalsec > max)
		{
			max = totalsec ;
			strcpy(kazanan,isim);
		}
		
		
	}
		
	printf("Kazanan isim : %s\nDerecesi : ",isim);
	printf("%d",totalsec);
	
	
	return(0);
}


