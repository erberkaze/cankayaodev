#include <stdio.h>
#include <string.h>
int main(void)
{
	//initialization
	char arr[30];
	char deli;
	int i , j;
	FILE *fin , *fout;
	
	//taking delimeter
	printf("Please input your delimeter that will be seperate your sentence\n");
	scanf("%c" , &deli);
	
	//taking sentence as a string
	fin = fopen("input.txt","r");
	
	for(j = 1 ; j <=2 ; j++)
	{
		fgets(arr,30,fin);
		printf("Line %d : ",j);
		puts(arr);
		
		for(i = 0 ; arr[i] != '\0' ; i++)
		{	
			if(arr[i] != deli)
			{
				printf("%c",arr[i]);
			}
			else if(arr[i] == deli)
			{
			printf("\n");
			}
			
		}
		
		
		
	}	
	

	
	
	
	
	
	
	
	
	
	
	return(0);
}
