#include <stdio.h>
int main(void)
{
	char cumle[100];
	int i , j;
	
	printf("Please input sentence");
	gets(cumle);

	for(i = 0 ; cumle[i] != '\0' ; i++)
	{
		if( cumle[i] == ' ' && cumle[i+1] == ' ')
		{
			for(j = i+1 ; cumle[j] != '\0' ; j++)
				cumle[j] = cumle[j+1];
			i--;
		}	
	}
	puts(cumle);


	return(0);
}

