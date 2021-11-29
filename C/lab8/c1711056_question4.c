#include <stdio.h>
int main(void)
{
	
	char cumle[100] , yeni[100];
	int i , j , k = 0;
	
	
	printf("Please input a sentence");
	gets(cumle);
	yeni[0]=cumle[0];
	
	for(i = 1 ; cumle[i] != '\0' ; i++)
	{
		if(cumle[i] != yeni[k])
		{
			k++;
			yeni[k] = cumle[i];
		}
			
	}
	k++;
	
	yeni[k] = '\0';
	
	puts(yeni);
	
	
	return(0);
}
