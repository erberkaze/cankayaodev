#include <stdio.h>
#include <string.h>
struct sehirler{
	char cityname[30];
	char country[30];
	int lowesttemp;
	int highesttemp;
};
void f1(struct sehirler *p1 ,int *p2);
void f2(struct sehirler *p5);
int main(void)
{
	//initialization
	struct sehirler cities[10];
	int i , j , k , high = 0 , max_olan;
	char sehirinadi[30];
	
	//input statements
	for(i = 0 ; i < 3 ; i++)
	{
		printf("Please input city name :");
		scanf("%s",&cities[i].cityname);
		printf("Please input country name :");
		scanf("%s",&cities[i].country);
		printf("Please input lowest temp :");
		scanf("%d",&cities[i].lowesttemp);
		printf("Finally please input highest temp thanks... :");
		scanf("%d",&cities[i].highesttemp);
	}
	
	//checking which cities has highest tempature
	for(j = 0 ; j < 3 ; j++)
	{
		if(cities[j].highesttemp > high)
		{
			high = cities[j].highesttemp;
			strcpy(sehirinadi , cities[j].country);
		}
	}
	printf("\n");
	printf("The city that has the highest tempature is : %s and tempature is %d \n" , sehirinadi , high);
	
	f1(&cities,&max_olan);
	
	printf("Name Of the city that has the most difference between it's highest and lowest temp : %s\n",cities[max_olan].cityname);
	printf("Name Of the country that has the most difference between it's highest and lowest temp : %s\n",cities[max_olan].country);
	printf("Highest temp value Of the city that has the most difference between it's highest and lowest temp : %d\n",cities[max_olan].highesttemp);
	printf("Lowest temp value Of the city that has the most difference between it's highest and lowest temp : %d\n",cities[max_olan].lowesttemp);
	
	f2(&cities);
	
	

	
	return(0);
}
void f1(struct sehirler *p1 ,int *p2)
{
	//initialization
	int i , max ;
	
	for(i = 0 ; i < 3 ; i++)
	{
		if(max < (p1[i].highesttemp - p1[i].lowesttemp))
		{
			max = p1[i].highesttemp - p1[i].lowesttemp;
			*p2 = i;
		}
	}	
}
void f2(struct sehirler *p5)
{
	//initialization
	int i , min = 999 , deger;
	
	for(i = 0 ; i < 3 ; i++)
	{
		if(p5[i].lowesttemp < min)
		{
			min = p5[i].lowesttemp;
			deger = i;
		}
	}
	printf("The city that has the lowest temp is : %s and the lowest temp is %d ",p5[deger].country,p5[deger].lowesttemp);
	
}


