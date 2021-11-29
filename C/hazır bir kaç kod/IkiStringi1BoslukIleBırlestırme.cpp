#include <stdio.h>
int main(void)
{
	//initialization
	int i , k = 0 , j;
	FILE *fin;
	char c1[30] , c2[30], birlesmishal[50];
	
	fin = fopen("input.txt","r");
	fscanf(fin,"%s %s",&c1,&c2);
	
	//birlestirme kismi
	for(i = 0 ; c1[i] != '\0' ; i++)
	{
		birlesmishal[k] = c1[i];
		k++;
	}
	birlesmishal[k] = ' ';
	k++;
	for(j = 0 ; c2[j] != '\0' ; j++)
	{
		birlesmishal[k] = c2[j];
		k++;
	}
	birlesmishal[k] = '\0';
	puts(birlesmishal);
	return(0);
}

