#include <stdio.h>
int main(void)
{
	// initialization 
	char cumle[30];
	int i , inputs , fark;

	//input statements
	printf("Please input your password");
	gets(cumle);
	
	//input part2
	printf("Please input how much do you wanna change your password");
	scanf("%d", &inputs);

	//shiting statements
	for (i = 0 ; (cumle[i] != ' ') && (cumle[i] != '\0' ) ; i++)
	{
		if ((cumle[i] + inputs) > 122)
		{
			fark = cumle[i] + inputs;
			fark = fark - 122;
			cumle[i] = 96;
			cumle[i] = cumle[i] + fark;
		}
		else
			cumle[i] = cumle[i] + inputs;
	}

	puts(cumle);

	return(0);
}
