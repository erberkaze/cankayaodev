#include <stdio.h>
#include <string.h>
int main(void)
{
	//initialization
	char stringarr[100];//for array string
	int i , j , k;
	
	//input statements
	printf("Please input your sentence");
	gets(stringarr);
	
	//check and processing
	for(i=0 ; i<100 ; i++)
	{
		if(stringarr[i] == ' ')
			stringarr[i] ='?';
	}
	//output statement
	puts(stringarr);
	
	
	return(0);
}
