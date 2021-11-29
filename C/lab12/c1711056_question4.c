#include <stdio.h>
#include <string.h>
struct information{
	char name[30];
	int rank;
	int won;
	int budget;
};
int main(void)
{
	struct information teams[10];
	int i , b = 0 , j;
	
	for(i = 0 ; i < 10 ; i++)
	{
		printf("Please input %dth team's informations\n",i+1);
		
		printf("Name : ");
		gets(teams[i].name);
		
		printf("Rank : ");
		scanf("%d",&teams[i].rank);
	
		printf("Won : ");
		scanf("%d",&teams[i].won);
	
		printf("Budget : ");
		scanf("%d",&teams[i].budget);
	}
	
	for(j = 0 ; j < 10 ; j++)
	{
		if(teams[j].budget < teams[b].budget && teams[j].won > teams[b].won)
		{
			b = j;
		}
		
	}
	printf("Best team is = %d\n",b+1);
	printf("Best team's values are...\nName : %s\nRank : %d\nWon : %d\nBudget : %d\n",teams[b].name,teams[b].rank,teams[b].won,teams[b].budget);
	
	return(0);
}
