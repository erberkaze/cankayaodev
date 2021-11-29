#include <stdio.h>
int main(void)
{
	//initialization
	char cumle[100], arr[10][10];
	int i, k = 0 , j = 0;
	int inner, outter;

	//input statement
	printf("Please input your sentence thx");
	gets(cumle);

	//1d to 2d array char by char
	for (i = 0; (cumle[i] = !'\0') ; i++)
	{
		if(cumle[i] != ' ')
		{ 
			arr[j][k] = cumle[i];
			k++;
		}
		if (k == 10)
		{
			k = 0;
			j++;
		}
	}

	for (outter = 0; outter < 10; outter++)
	{
		for (inner = 0; inner < 10; inner++)
			printf("%c\t", arr[outter][inner]);
		printf("\n");
	}



	return(0);
}
