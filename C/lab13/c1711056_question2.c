#include <stdio.h>
#include <string.h>
typedef struct{
	char word[30];
	
	
}info;


int main(void)
{
	//initialization
	int i , numberof_loops=0 , numberof_if=0 , numberof_comments=0 , numberof_file=0 , l=0 , k=0 , count = 0 , p , q ,j;
	char cumle[100] , program[20];
	info cumledenkelimelere[30];
	FILE *fin;
	FILE *fout;
	
	fin = fopen("cfile1.c","r");
	while(fgets != NULL)
	{
		fgets(cumle,50,fin);
		count = 0;
		for(i = 0 ; cumle[i] != '\0' ; i++)
		{
			if(cumle[i] != ' ')
			{
				k = 0 ;
				for(j = i ; cumle[j] != ' ' ; j++)
				{
					cumledenkelimelere[l].word[k] = cumle[j];
					k++;
				}
				l++;
				count++;
				i = j;
			}
		}
		for(p = 0 ; p <= count ; p++)
		{
			if(!strncmp(&cumledenkelimelere[p].word,"if",2) == 1)
			{
				numberof_if++;
			}
			else if(!strncmp(&cumledenkelimelere[p].word,"while",5) == 1)
			{
				numberof_loops++;
			}
			else if(!strncmp(&cumledenkelimelere[p].word,"for",3) == 1)
			{
				numberof_loops++;
			}
			else if(!strncmp(&cumledenkelimelere[p].word,"FILE",4) == 1)
			{
				numberof_file++;
			}
			else if(!strncmp(&cumledenkelimelere[p].word,"/",1) == 1)
			{
				numberof_comments++;
			}
			
		}
	}
	fclose(fin);
	fin = fopen("cfile2.c","r");
	while(fgets != NULL)
	{
		fgets(cumle,50,fin);
		count = 0;
		for(i = 0 ; cumle[i] != '\0' ; i++)
		{
			if(cumle[i] != ' ')
			{
				k = 0 ;
				for(j = i ; cumle[j] != ' ' ; j++)
				{
					cumledenkelimelere[l].word[k] = cumle[j];
					k++;
				}
				l++;
				count++;
				i = j;
			}
		}
		for(p = 0 ; p <= count ; p++)
		{
			if(!strncmp(&cumledenkelimelere[p].word,"if",2) == 1)
			{
				numberof_if++;
			}
			else if(!strncmp(&cumledenkelimelere[p].word,"while",5) == 1)
			{
				numberof_loops++;
			}
			else if(!strncmp(&cumledenkelimelere[p].word,"for",3) == 1)
			{
				numberof_loops++;
			}
			else if(!strncmp(&cumledenkelimelere[p].word,"FILE",4) == 1)
			{
				numberof_file++;
			}
			else if(!strncmp(&cumledenkelimelere[p].word,"/",1) == 1)
			{
				numberof_comments++;
			}
			
		}
	}
	fclose(fin);
	fin = fopen("cfile3.c","r");
	while(fgets != NULL)
	{
		fgets(cumle,50,fin);
		count = 0;
		for(i = 0 ; cumle[i] != '\0' ; i++)
		{
			if(cumle[i] != ' ')
			{
				k = 0 ;
				for(j = i ; cumle[j] != ' ' ; j++)
				{
					cumledenkelimelere[l].word[k] = cumle[j];
					k++;
				}
				l++;
				count++;
				i = j;
			}
		}
		for(p = 0 ; p <= count ; p++)
		{
			if(!strncmp(&cumledenkelimelere[p].word,"if",2) == 1)
			{
				numberof_if++;
			}
			else if(!strncmp(&cumledenkelimelere[p].word,"while",5) == 1)
			{
				numberof_loops++;
			}
			else if(!strncmp(&cumledenkelimelere[p].word,"for",3) == 1)
			{
				numberof_loops++;
			}
			else if(!strncmp(&cumledenkelimelere[p].word,"FILE",4) == 1)
			{
				numberof_file++;
			}
			else if(!strncmp(&cumledenkelimelere[p].word,"/",1) == 1)
			{
				numberof_comments++;
			}
			
		}
	}
	fclose(fin);
	fin = fopen("cfile4.c","r");
	while(fgets != NULL)
	{
		fgets(cumle,50,fin);
		count = 0;
		for(i = 0 ; cumle[i] != '\0' ; i++)
		{
			if(cumle[i] != ' ')
			{
				k = 0 ;
				for(j = i ; cumle[j] != ' ' ; j++)
				{
					cumledenkelimelere[l].word[k] = cumle[j];
					k++;
				}
				l++;
				count++;
				i = j;
			}
		}
		for(p = 0 ; p <= count ; p++)
		{
			if(!strncmp(&cumledenkelimelere[p].word,"if",2) == 1)
			{
				numberof_if++;
			}
			else if(!strncmp(&cumledenkelimelere[p].word,"while",5) == 1)
			{
				numberof_loops++;
			}
			else if(!strncmp(&cumledenkelimelere[p].word,"for",3) == 1)
			{
				numberof_loops++;
			}
			else if(!strncmp(&cumledenkelimelere[p].word,"FILE",4) == 1)
			{
				numberof_file++;
			}
			else if(!strncmp(&cumledenkelimelere[p].word,"/",1) == 1)
			{
				numberof_comments++;
			}
			
		}
	}
	fclose(fin);
	printf("Number of if : %d\nNumber of loop : %d\nNumber of file : %d\nNumber of comment : %d\n",numberof_if,numberof_loops,numberof_file,numberof_comments);
		
	
	return(0);
}
