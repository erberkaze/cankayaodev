#include <stdio.h>
#include <string.h>
struct info{
	
	char kelime[30];
	int position;
	
};
int main(void)
{	
	//initialization
	int i , k = 0 , l = 0 ,j;
	struct info kelimeler[30];
	char cumle[100];
	char kelimecik[30];
	
	printf("Please input sentence");
	gets(cumle);
		
	for(i = 0 ; cumle[i] != '\0' ; i++ )
	{
		if(cumle[i] != ' ' && cumle[i+1] != ' ')
		{
			k = 0;
			for(j = i ; cumle[j] != ' ' ; j++)
			{
				kelimecik[k] = cumle[j];
				k++;
				i = j;
			}
			kelimecik[k] = '\0';
			strcpy(kelimeler[l].kelime,kelimecik);
			kelimeler[l].position = l;
			l++;
		}
	}
	


	return(0);
}
