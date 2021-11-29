#include <stdio.h>
#include <string.h>
int main(void)
{	

	//initialization
	char ikiboyut[10][10] , temp[100];
	int i , j , s , boyut1 , boyut2 , p , max , k;
	

	//input statements
	printf("Please input names");
	for(i = 0 ; i < 4 ; i++)
	{	
		gets(&ikiboyut[i]);
	}
	max = strlen(ikiboyut[0]);
	for(j = 0 ; j < 10 ; j++)
	{
		
		for(k = 0 ; k < 10 ; k++)
		{
			boyut2 = strlen(ikiboyut[k]);
			if(boyut2 > max)	
			{
				max = boyut2;
				strcpy(temp , ikiboyut[j]);
				strcpy(ikiboyut[j] , ikiboyut[k]);
				strcpy(ikiboyut[k] , temp);
			}
		}
	}
	printf("@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@");
	for(p = 0 ; p <10 ; p++)
	{	
		puts(&ikiboyut[p]);
		
	}
	
	//s = strlen(ikiboyut[0]);
	//printf("\n");
	//printf("%d",s);

	return(0);
}
