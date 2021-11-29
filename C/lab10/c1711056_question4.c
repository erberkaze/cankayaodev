#include <stdio.h>
#include <string.h>
int main(void)
{
	//initialization
	char ikiboyutlu[4][4] , temp[100];
	int i , l = 0, j , k , h;
	char a;
	
	//input statements
	printf("Please input names");
	for(i = 0 ; i < 4 ; i++)
	{
		gets(&ikiboyutlu[i]);
	}
	
	//changing
	for(j = 0 ; j < 4 ; j++)
	{
		for(k = 0 ; k < 4 ; k++)
		{
			if(ikiboyutlu[k][0] > ikiboyutlu[j][0])
			{
				strcpy(temp , ikiboyutlu[j]);
				strcpy(ikiboyutlu[j] , ikiboyutlu[k]);
				strcpy(ikiboyutlu[k]  , temp);
			}
		}
	}
	
	//controling
	for(h = 0 ; h < 4 ; h++)
		puts(&ikiboyutlu[h]);
	
	return(0);
}
